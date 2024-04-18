
emcc only-wasm.c -s STANDALONE_WASM -s EXPORTED_FUNCTIONS='["_hello"]' -o only-wasm.wasm




# old attempts


emcc only-wasm.c -s EXPORTED_FUNCTIONS='["_hello"]'  -o only-wasm.wasm -s STANDALONE_WASM


.





emcc only-wasm.c -s STANDALONE_WASM -o only-wasm.wasm -s EXPORTED_FUNCTIONS='["_hello"]'





old
emcc only-wasm.c  -s STANDALONE_WASM -o only-wasm.wasm -s EXPORTED_FUNCTIONS='["_hello"]' -s EXPORTED_RUNTIME_METHODS='["ccall", "cwrap"]'
