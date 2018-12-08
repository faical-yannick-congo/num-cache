#for GNU make

#DDEBUG = -O0 -g -ggdb -DDEBUG=1

CC = g++ -std=gnu++0x -U__STRICT_ANSI__ $(DDEBUG)
# CC = gcc -Wall -O3 -std=c99 -Wmissing-prototypes $(DDEBUG)
#CC = icc -Wall -O3 -std=c99 -Wmissing-prototypes $(DDEBUG)

all:  ignore witness use run

run:  run.cpp mt64.o
	${CC} -o $@  ../../../cpp/numb/sha256.cpp ../../../cpp/numb/numb.cpp run.cpp mt64.o ${LINKOPT}

ignore:  ignore_cache.cpp mt64.o
	${CC} -o $@  ../../../cpp/numb/sha256.cpp ../../../cpp/numb/numb.cpp ignore_cache.cpp mt64.o ${LINKOPT}

witness:  witness_cache.cpp mt64.o
	${CC} -o $@  ../../../cpp/numb/sha256.cpp ../../../cpp/numb/numb.cpp witness_cache.cpp mt64.o ${LINKOPT}

use:  use_cache.cpp mt64.o
	${CC} -o $@  ../../../cpp/numb/sha256.cpp ../../../cpp/numb/numb.cpp use_cache.cpp mt64.o ${LINKOPT}
.c.o:
	${CC} -c $<

clean:
	rm -rf ignore witness use run *.o *~
