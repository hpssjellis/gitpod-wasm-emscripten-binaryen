
emcc only-wasm.c  -s STANDALONE_WASM -o only-wasm.wasm -s EXPORTED_FUNCTIONS='["_hello"]' -s EXPORTED_RUNTIME_METHODS='["ccall", "cwrap"]'
