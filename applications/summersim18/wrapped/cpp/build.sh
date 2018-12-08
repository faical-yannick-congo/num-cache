#!/bin/bash

g++ -std=gnu++0x -U__STRICT_ANSI__ ../../../../cpp/numb/sha256.cpp ../../../../cpp/numb/numb.cpp add-showcase/left-add.cpp -o build/left-add
g++ -std=gnu++0x -U__STRICT_ANSI__ ../../../../cpp/numb/sha256.cpp ../../../../cpp/numb/numb.cpp sub-showcase/left-sub.cpp -o build/left-sub
g++ -std=gnu++0x -U__STRICT_ANSI__ ../../../../cpp/numb/sha256.cpp ../../../../cpp/numb/numb.cpp mul-showcase/left-mul.cpp -o build/left-mul
g++ -std=gnu++0x -U__STRICT_ANSI__ ../../../../cpp/numb/sha256.cpp ../../../../cpp/numb/numb.cpp div-showcase/left-div.cpp -o build/left-div

g++ -std=gnu++0x -U__STRICT_ANSI__ ../../../../cpp/numb/sha256.cpp ../../../../cpp/numb/numb.cpp add-showcase/right-add.cpp -o build/right-add
g++ -std=gnu++0x -U__STRICT_ANSI__ ../../../../cpp/numb/sha256.cpp ../../../../cpp/numb/numb.cpp sub-showcase/right-sub.cpp -o build/right-sub
g++ -std=gnu++0x -U__STRICT_ANSI__ ../../../../cpp/numb/sha256.cpp ../../../../cpp/numb/numb.cpp mul-showcase/right-mul.cpp -o build/right-mul
g++ -std=gnu++0x -U__STRICT_ANSI__ ../../../../cpp/numb/sha256.cpp ../../../../cpp/numb/numb.cpp div-showcase/right-div.cpp -o build/right-div
