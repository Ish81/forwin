from conans import ConanFile, CMake

class WynBridgeConan(ConanFile):
    name = "wynbridge"
    version = "0.1"
    settings = "os", "compiler", "build_type", "arch"
    generators = "cmake"
    requires = (
        "yaml-cpp/0.7.0",         # For YAML config parsing
        "open62541/1.3.5"         # OPC UA client lib
    )

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()
