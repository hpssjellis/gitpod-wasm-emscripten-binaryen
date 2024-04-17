# wasm-emscripten-binaryen Loaded onto Gitpod.io


This repository can load a fully running version of emscripten using the browser based docker called Gitpod.io



1. First login to Github
2. Load ```Gitpod.io/#``` with this repository  using this link    https://gitpod.io/#github.com/hpssjellis/gitpod-wasm-emscripten-binaryen
3. Watch the magic as Gitpod.io loads the entire emscripten framework and loads a Hello World example and puts you in the ```myExample``` folder
4. Happy coding!

When you have made a .c file called myFile.c run it using this command

```

emcc myFile.c -o myFile.html

```


A C++ file would be ran this way

```
em++ myFile.cpp -o myFile.html

```

## You must use the main terminal since other terminals do not have the PATH set.

Note on a new terminal the path might be needed to be set with this command

```
export PATH="/w/workspace/gitpod-wasm-emscripten-binaryen/emsdk:/workspace/gitpod-wasm-emscripten-binaryen/emsdk/upstream/emscripten:orkspace/wasm-emscripten-binaryen/emsdk/upstream/emscripten:$PATH"
```


Or edit the 

```
tasks:
  - before: printf 'export PATH="%s:$PATH"\n' "/usr/games" >> $HOME/.bashrc && exit
```

.




.


Examples at   https://emscripten.org/docs/porting/connecting_cpp_and_javascript/embind.html#a-quick-example


.


.

try online although they seem slow or not even correct

https://mbebenita.github.io/WasmExplorer/

https://webassembly.studio/


.





.





.













## Just my notes here for when I made this repository


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
