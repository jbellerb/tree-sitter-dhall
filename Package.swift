// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterDhall",
    products: [
        .library(name: "TreeSitterDhall", targets: ["TreeSitterDhall"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterDhall",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
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
