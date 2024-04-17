emcc hello_world.c -s STANDALONE_WASM -s EXPORTED_FUNCTIONS='["_hello"]' -o hello_world.wasm
