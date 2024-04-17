emcc foobar.c -o foobar.js -s EXPORTED_FUNCTIONS='["_main", "_foo", "_bar"]' -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall", "cwrap"]'



//emcc foobar.c -o foobar.js
