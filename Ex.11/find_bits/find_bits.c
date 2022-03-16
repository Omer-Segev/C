#include <stdio.h>

unsigned long find_bits(unsigned long x, unsigned long y);
int size_int(void);

int main() {
    unsigned long x = 346, y = 150;
/*
    printf("Hello, please enter two unsigned numbers: ");
    scanf("%lu", &x);
    scanf("%lu", &y);
*/
    
    /* printf("expacted 3 , actual:  %lu \n", find_bits(x,y)); */

    printf("Bits found: %lu\n", find_bits(x,y));

    return 0;
}

unsigned long find_bits(unsigned long x, unsigned long y){

    int i, count, len = size_int();
    
    for (i = 0, count = 0; i < len; ++i, x >>= 1, y >>= 1){
        if(x & 1 && y & 1){
            count++;
        }
    }
    return count;
}

/* find size of int */
int size_int(void){

    int count, mask = -1;
    for(count = 0; mask; mask <<= 1, count++);
    return count;
}