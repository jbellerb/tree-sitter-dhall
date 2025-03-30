// swift-tools-version:5.3

import Foundation
import PackageDescription

var sources = ["src/parser.c", "src/scanner.c"]

let package = Package(
    name: "TreeSitterDhall",
    products: [
        .library(name: "TreeSitterDhall", targets: ["TreeSitterDhall"]),
    ],
    dependencies: [
        .package(url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterDhall",
            dependencies: [],
            path: ".",
            sources: sources,
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterDhallTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterDhall",
            ],
            path: "bindings/swift/TreeSitterDhallTests"
        )
    ],
    cLanguageStandard: .c11
)
