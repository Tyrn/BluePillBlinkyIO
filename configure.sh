#/usr/bin/env bash

# Configure/reconfigure the project and the language server.

pio project init --ide=vim
pio run -t compiledb
