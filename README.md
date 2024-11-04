# tree-sitter-dhall

[Dhall](https://dhall-lang.org/) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)

## Scope

This parser is designed for syntax highlighting and does not strictly follow the Dhall language semantics. My goal is for all valid Dhall expressions to parse to something sensible. An invalid expression parsing is fine, except when it is obviously wrong. To help with this, the output of the parser is checked with hand-written [syntax trees](test/corpus/) for every Dhall [successful parse test](https://github.com/dhall-lang/dhall-lang/tree/master/tests/parser/success) (current with dhall-lang commit [4fecb49](https://github.com/dhall-lang/dhall-lang/commit/4fecb49a83caac4477d1e413fa6e4ee722b43b62)) except:

- unit/ShebangA.dhall, unit/ShebangNixA.dhall: Handled by the text editor.
- unit/TrailingLineCommentWithoutNewlineA.dhall: Unclear how to test with tree-sitter.

These tests also serve as a reference for what syntax trees various Dhall expressions produce. A shell script ([tests.sh](tests.sh)) is used to check that all tests are included. There may be extra test cases besides the Dhall ones. Ideally, those would eventually get upstreamed.

## References

- [The Dhall Syntax Grammar](https://github.com/dhall-lang/dhall-lang/blob/master/standard/dhall.abnf) - Dhall syntax is specified as an ABNF grammar based on RFC 5234.
- [The Dhall Acceptance Tests](https://github.com/dhall-lang/dhall-lang/tree/master/tests) - Tests provided by the Dhall authors to verify implementation correctness. The binary format parsing tests evaluate to is described [here](https://github.com/dhall-lang/dhall-lang/blob/master/standard/binary.md).
- [Dhall Semantics](https://github.com/dhall-lang/dhall-lang/blob/master/standard) - The complete specification of the dhall language, which all implementations are based on.

<br />

#### License

<sup>
Copyright (C) jae beller, 2022.
</sup>
<br />
<sup>
Released under the <a href="LICENSE">MIT License</a>. Test scenarios in <a href="test/corpus/">test/corpus/</a> are copyright the Dhall authors and reproduced under the <a href="LICENSE.dhall-lang">BSD-3-Clause License</a>.
</sup>
