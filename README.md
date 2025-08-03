# forwin

# How to Run
conan install . --build=missing
cmake .
cmake --build .
./wynbridge  # or ./bin/wynbridge if built that way

# Sample config.yaml
servers:
  - endpoint: "opc.tcp://192.168.0.100:4840"
    tags:
      - "TemperatureSensor1"
      - "PressureValve2"
