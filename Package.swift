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
