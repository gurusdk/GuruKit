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
            targets: ["GuruKitWrapper"]
        ),
    ],
    dependencies: [
        .package(url: "https://github.com/gurusdk/GuruKit.git", from: "0.2.5"),
        .package(url: "https://github.com/facebook/facebook-ios-sdk", from: "17.1.0"),
    ],
    targets: [
        .binaryTarget(
            name: "GuruShared",
            path: "./GuruShared.xcframework"
        ),
        .binaryTarget(
            name: "GuruKit",
            path: "./GuruKit.xcframework"
        ),
        .target(
            name: "GuruKitWrapper",
            dependencies: [
                "GuruKit",
                "GuruShared",
                .product(name: "FacebookLogin", package: "facebook-ios-sdk"),
                .product(name: "FacebookCore", package: "facebook-ios-sdk"),
                .product(name: "FBAEMKit", package: "facebook-ios-sdk"),
            ],
            path: "Sources/GuruKitWrapper"
        )
    ]
)
