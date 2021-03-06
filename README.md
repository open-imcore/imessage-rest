# imessage-rest
A high-performance, fully-featured REST API for iMessage.

Wanna chat? Hop on [Discord](https://discord.gg/ck26FwFJun).

## Getting Started

### Prerequisites
These are not strict requirements – this project is simply only ensured to build on the following specs:

- Xcode 12.4
- macOS Big Sur
- Theos (when compiling for iOS)

### Building

#### Development
You should be able to just fire up the project and build what you please. Running the `imessage-rest.xpc` service from Xcode requires a bit of fenagling to trick Xcode into running an XPC service, but once you are able to select is as an executable debugging it should be a breeze.

#### Custom Distribution
If you're trying to make a custom distribution, running `make all` should suffice. You can also run `make ios` or `make macos` if you just want one platform to build.

### Installing
For iOS, a `.deb` file is generated and can be installed to automate the installation process.

For macOS, there is no automated installation process. The only piece of manual installation is installing `Staging/Library/Preferences/com.apple.security.xpc.plist` to `/Library/Preferences`. This file is also included in archives targeting macOS.

## Documentation

Documentation for the REST API provided by this software is available [here](https://www.notion.so/MyMessage-API-Documentation-6b50937acef44341aa177999a28f0c3c).

Client libraries are available for different environments, wrapping most functionality with a simple, familiar API.

## Built With
- [Vapor](https://github.com/vapor/vapor) – The REST framework
- [Swift Package Manager](https://github.com/apple/swift-package-manager) – Dependency management
- [GRDB](https://github.com/groue/GRDB.swift) – Used for SQLite
- [AnyCodable](https://github.com/Flight-School/AnyCodable) – To make my life easier
- The IM family of frameworks
- Tons and tons of love, reverse engineering, and muzzled AMFI

## Contributing
Please read [CONTRIBUTING.md](CONTRIBUTING.md) for details on our code of conduct, and the process for submitting pull requests to us.

### Versioning
We use [SemVer](http://semver.org/) for versioning.

## Authors
- **[Eric Rabil](https://twitter.com/ericrabil)** – Creator and maintainer
- [Other Contributors](https://github.com/open-imcore/imessage-rest/contributors)

## License
This project is licensed under the GNU Affero General Public License (with the following amendments) – see the [LICENSE.md](LICENSE.md) for details.

## Acknowledgments
- I could not have done this without [Hopper](https://www.hopperapp.com/) – It is an excellent tool for reverse-engineering and I have spent countless hours using it for this project.
- The Messages team has fleshed out a truly remarkable ecosystem of frameworks and daemons. The struggles working with these APIs were due to a lack of documentation – the frameworks themselves are very feature-rich and easy to use once properly understood.
