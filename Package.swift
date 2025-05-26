// swift-tools-version: 5.4
import PackageDescription

let package = Package(
    name: "GuruKit",
    platforms: [
        .iOS(.v12),
    ],
    products: [
        .library(
            name: "GuruKit",
            targets: ["GuruKit", "GuruShared"]
        ),
    ],
    dependencies: [
        .package(url: "https://github.com/gurusdk/GuruKit.git", from: "0.1.1"),
    ],
    targets: [
        .binaryTarget(
            name: "GuruShared",
            path: "./GuruShared.xcframework"
        ),
        .binaryTarget(
            name: "GuruKit",
            path: "./GuruKit.xcframework"
        )
    ]
)
