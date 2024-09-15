import XCTest
import SwiftTreeSitter
import TreeSitterCsproj

final class TreeSitterCsprojTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_csproj())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Csproj grammar")
    }
}
