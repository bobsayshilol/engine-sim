#/bin/sh

mkdir build
cd build/
#CC=clang CXX=clang++ cmake -DCMAKE_BUILD_TYPE=Release ../engine-sim/
CC=clang CXX=clang++ cmake -DCMAKE_BUILD_TYPE=Release ../
cmake --build . --target engine-sim-app -j
