{
  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs/nixos-unstable";
  };

  outputs = { self, nixpkgs }:
    let
      system = "x86_64-linux";

      pkgs = import nixpkgs {
        inherit system;
        overlays = [ self.overlays.default ];
      };

      pname = "tree-sitter-dhall";
      version = "0.0.1";

      fileset = nixpkgs.lib.fileset.unions [
        ./grammar.js
        ./package.json
        ./package-lock.json
        ./src/scanner.c
        ./tree-sitter.json
      ];
      src = nixpkgs.lib.fileset.toSource {
        root = ./.;
        inherit fileset;
      };

      meta = {
        description = "Dhall grammar for the tree-sitter parsing library";
        homepage = "https://github.com/jbellerb/tree-sitter-dhall";
        license = nixpkgs.lib.licenses.mit;
        platforms = nixpkgs.lib.platforms.linux;
      }; 

    in {
      packages."${system}" = {
        tree-sitter-dhall = pkgs.callPackage (
          { lib, stdenv, nodejs, tree-sitter }:

          stdenv.mkDerivation {
            inherit pname version src meta;

            nativeBuildInputs = [ nodejs tree-sitter ];

            buildPhase = "tree-sitter generate";
            installPhase = ''
              mkdir "$out"
              mv src/ "$out"
            '';
          }
        ) {};
     };

      checks."${system}" = {
        tree-sitter-dhall-test = pkgs.callPackage (
          { stdenv, tree-sitter, tree-sitter-dhall }:

          stdenv.mkDerivation {
            pname = "${pname}-test";
            inherit version;

            src = nixpkgs.lib.fileset.toSource {
              root = ./.;
              fileset = nixpkgs.lib.fileset.unions [
                fileset
                ./binding.gyp
                ./bindings/node
                ./test/corpus
              ];
            };

            configurePhase = "cp -r ${tree-sitter-dhall}/src .";
            buildPhase = ''
              export HOME=$(mktemp -d)
              ${tree-sitter}/bin/tree-sitter test
            '';
            installPhase = "touch $out";

            meta = meta // { description = "Check tree-sitter parser tests"; };
          }
        ) {};

        tree-sitter-dhall-coverage = pkgs.callPackage (
          { lib, stdenvNoCC, fetchFromGitHub }:

          let
            dhall = fetchFromGitHub {
              owner = "dhall-lang";
              repo = "dhall-lang";
              rev = "4bedfcfd409ca9914b435ab366e47b64b9a9ddf4";
              hash = "sha256-WUJhOK2PWUAy2VQZ7j6QnyXwPXxOto7E4Uc8qqrQtmw=";
            };

            missing = [
              "recordProjectionByExpressionA.dhall"
              "largeExpressionA.dhall"
              "unit/ShebangA.dhall"
              "unit/ShebangNixA.dhall"
            ];

          in stdenvNoCC.mkDerivation {
            pname = "${pname}-coverage";
            inherit version src;

            buildPhase = ''
              ${./tests.sh} -c ${test/corpus}\
                -i ${lib.strings.concatStringsSep "," missing}\
                ${dhall}/tests/parser/success/
            '';
            installPhase = "touch $out";

            meta = meta // { description = "Check test coverage"; };
          }
        ) {};
      };

      overlays.default = final: prev: { } // self.packages."${system}";

      devShells."${system}".default = pkgs.mkShell {
        nativeBuildInputs = [
          pkgs.nodejs
          pkgs.nodePackages.node-gyp
          pkgs.nodePackages.typescript-language-server
          (pkgs.python3.withPackages(ps: [ ps.gyp ]))
          pkgs.shellcheck
          pkgs.tree-sitter
        ];
      };
    };
}
