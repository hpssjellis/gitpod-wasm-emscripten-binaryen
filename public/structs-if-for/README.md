emcc structs-if-for.c -o structs-if-for.js -s EXPORTED_FUNCTIONS='["_printPerson", "_classifyGrade", "_sumOfNumbers", "_countToN"]' -s EXPORTED_RUNTIME_METHODS='["ccall", "cwrap","_malloc","_free"]'
