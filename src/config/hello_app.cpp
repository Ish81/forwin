#include <iostream>
#include <yaml-cpp/yaml.h>
#include <string>
#include <vector>

void loadConfig(const std::string& path) {
    YAML::Node config = YAML::LoadFile(path);
    if (!config["servers"]) {
        std::cerr << "No servers found in config.yaml\n";
        return;
    }

    for (const auto& server : config["servers"]) {
        std::string endpoint = server["endpoint"].as<std::string>();
        std::cout << "OPC Server: " << endpoint << std::endl;

        for (const auto& tag : server["tags"]) {
            std::cout << "  Tag: " << tag.as<std::string>() << std::endl;
        }
    }
}

int main(int argc, char** argv) {
    std::cout << "[wynbridge] Starting OPC UA Client CLI\n";
    loadConfig("config.yaml");
    std::cout << "[wynbridge] Done.\n";
    return 0;
}
