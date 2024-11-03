import XCTest
import SwiftTreeSitter
import TreeSitterDhall

final class TreeSitterDhallTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_dhall())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Dhall grammar")
    }
}
