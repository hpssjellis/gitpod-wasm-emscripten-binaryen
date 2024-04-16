# wasm-emscripten-binaryen Loaded onto Gitpod.io


This repository can load a fully running version of emscripten using the browser based docker called Gitpod.io


























https://emscripten.org/docs/getting_started/downloads.html



```
# Get the emsdk repo
git clone https://github.com/emscripten-core/emsdk.git

# Enter that directory
cd emsdk

# Fetch the latest version of the emsdk (not needed the first time you clone)
git pull

# Download and install the latest SDK tools.
./emsdk install latest

# Make the "latest" SDK "active" for the current user. (writes .emscripten file)
./emsdk activate latest

# Activate PATH and other environment variables in the current terminal
source ./emsdk_env.sh




//possible

# Install Python
sudo apt-get install python3

# Install CMake (optional, only needed for tests and building Binaryen or LLVM)
sudo apt-get install cmake

```



```

# Fetch the latest registry of available tools.
./emsdk update  or  git pull

# Download and install the latest SDK tools.
./emsdk install latest

# Set up the compiler configuration to point to the "latest" SDK.
./emsdk activate latest

# Activate PATH and other environment variables in the current terminal
source ./emsdk_env.sh
```



https://emscripten.org/docs/getting_started/Tutorial.html



```
#include <stdio.h>

int main() {
  printf("hello, world!\n");
  return 0;
}

```


```

./emcc test/hello_world.c


```


```


./emcc test/hello_world.c -o hello.html


```


NOTE: better to set the path.


```
./upstream/emscripten/emcc -v


tried

          ln -s ./upstream/emscripten/emcc myemcc                                  &&
          ln -s ./upstream/emscripten/em++ myem++                                  &&

no success


might try

          export PATH="/Directory1:$PATH"

/workspace/wasm-emscripten-binaryen/emsdk
```



This works

```

echo -e "#include <stdio.h>\n\nint main() {\n   printf(\"Hello World\");\n  return 0;\n}" > myStuff.c

```

and this runs it

```
emcc mytest.c -o mytext.html

```
