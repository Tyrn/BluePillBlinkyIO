# The Blue Pill on PlatformIO, arduino framework

## Deploy and configure

- Clone

```
git clone git@github.com:Tyrn/BluePillBlinkyIO.git
```

```
cd BluePillBlinkyIO
```

- Install the necessary tools globally

```
pio pkg install -gt platformio/tool-stm32duino
```

- Configure the project, or reconfigure at will

```
./configure.sh
```

## Build

- Build and upload

```
pio run -t upload
```

## Format source

- Via Clang

```
clang-format -i **/*.(c|cpp|h|hh|hpp|ino)
```
