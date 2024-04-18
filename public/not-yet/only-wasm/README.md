
emcc only-wasm.c -s STANDALONE_WASM -s EXPORTED_FUNCTIONS='["_hello"]' -o only-wasm.wasm

I strongly suggest you do not do this method.  The .js file created by Emscripten does a lot of the work for you which is difficult to do this way.


# old attempts


emcc only-wasm.c -s EXPORTED_FUNCTIONS='["_hello"]'  -o only-wasm.wasm -s STANDALONE_WASM


.





emcc only-wasm.c -s STANDALONE_WASM -o only-wasm.wasm -s EXPORTED_FUNCTIONS='["_hello"]'





old
emcc only-wasm.c  -s STANDALONE_WASM -o only-wasm.wasm -s EXPORTED_FUNCTIONS='["_hello"]' -s EXPORTED_RUNTIME_METHODS='["ccall", "cwrap"]'
