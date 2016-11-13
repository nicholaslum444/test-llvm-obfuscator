#!/bin/bash
echo "compile normal"
../build/bin/clang a.c -o norm
echo "compile obfuscated"
../build/bin/clang a.c -o obs -mllvm -sub
echo "compile llvm"
../build/bin/clang a.c -o llvm -mllvm -sub -emit-llvm -S
echo "llvm--------"
cat llvm
echo "normal--------"
./norm
echo "obfuscated--------"
./obs
