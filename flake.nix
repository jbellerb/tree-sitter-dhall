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
      version = "0.1.0";

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

        tree-sitter-dhall-prettier = pkgs.callPackage (
          { stdenvNoCC, nodePackages }:

          stdenvNoCC.mkDerivation {
            pname = "${pname}-prettier";
            inherit version src;

            nativeBuildInputs = [ nodePackages.prettier ];

            buildPhase = "prettier --check .";
            installPhase = "touch $out";

            meta = meta // { description = "Check Prettier formatting"; };
          }
        ) {};

        tree-sitter-dhall-coverage = pkgs.callPackage (
          { lib, stdenvNoCC, fetchFromGitHub }:

          let
            dhall = fetchFromGitHub {
              owner = "dhall-lang";
              repo = "dhall-lang";
              rev = "4fecb49a83caac4477d1e413fa6e4ee722b43b62";
              hash = "sha256-VjOBG5kYY89njGpOxIpLFRK2mRP1UWr6QDOHtb7VMzE=";
            };

            missing = [
              "binaryA.dhall"
              "builtinsA.dhall"
              "bytesA.dhall"
              "unit/ShebangA.dhall"
              "unit/ShebangNixA.dhall"
              "unit/TrailingLineCommentWithoutNewlineA.dhall"
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
