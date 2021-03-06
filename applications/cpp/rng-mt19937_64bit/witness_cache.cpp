#include <stdio.h>
#include "mt64.h"

int main(void)
{
    // Ignore the cache but use it as a witness only of variations.
    // If a cache is given in, it will be used as a witness and
    // the checking will be logged.
    Numb::setup("cache3", "cache1", 8, "ignore-cache");

    int i;
    unsigned long long init[4]={0x12345ULL, 0x23456ULL, 0x34567ULL,\
       0x45678ULL}, length=4;
    init_by_array64(init, length);
    printf("1000 outputs of genrand64_int64()\n");
    for (i=0; i<1000; i++) {
      printf("%20llu ", genrand64_int64());
      if (i%5==4) printf("\n");
    }
    printf("\n1000 outputs of genrand64_real2()\n");
    for (i=0; i<1000; i++) {
      printf("%10.8f ", genrand64_real1().value);
      if (i%5==4) printf("\n");
    }
    return 0;
}
