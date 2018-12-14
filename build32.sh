#!/bin/sh
gcc -shared -fPIC fakeLibC.c -m32 -o fakeLibC32.so
