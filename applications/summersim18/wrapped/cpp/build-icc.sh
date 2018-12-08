#!/bin/bash

icc ../../../../cpp/numb/sha256.cpp ../../../../cpp/numb/numb.cpp add-showcase/left-add.cpp -o build/icc-left-add
icc ../../../../cpp/numb/sha256.cpp ../../../../cpp/numb/numb.cpp sub-showcase/left-sub.cpp -o build/icc-left-sub
icc ../../../../cpp/numb/sha256.cpp ../../../../cpp/numb/numb.cpp mul-showcase/left-mul.cpp -o build/icc-left-mul
icc ../../../../cpp/numb/sha256.cpp ../../../../cpp/numb/numb.cpp div-showcase/left-div.cpp -o build/icc-left-div

icc ../../../../cpp/numb/sha256.cpp ../../../../cpp/numb/numb.cpp add-showcase/right-add.cpp -o build/icc-right-add
icc ../../../../cpp/numb/sha256.cpp ../../../../cpp/numb/numb.cpp sub-showcase/right-sub.cpp -o build/icc-right-sub
icc ../../../../cpp/numb/sha256.cpp ../../../../cpp/numb/numb.cpp mul-showcase/right-mul.cpp -o build/icc-right-mul
icc ../../../../cpp/numb/sha256.cpp ../../../../cpp/numb/numb.cpp div-showcase/right-div.cpp -o build/icc-right-div
