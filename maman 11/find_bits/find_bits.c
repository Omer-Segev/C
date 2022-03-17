/* 
* File Name: find_bits.c
* 
* @author Omer Segev
*/

#include <stdio.h>

/* A method that receives two parameters x,y and checks for parm x how many ON bits are in the same places (index) as the ON bits in parm y and return the sum */
unsigned long find_bits(unsigned long x, unsigned long y);

/* A method that get the size of the int*/
int size_int(void);

int main() {
    unsigned long x, y;

	/* Get the unsigned numbers from the user: */	
    printf("Hello, please enter two unsigned numbers: ");
    scanf("%lu", &x);
    scanf("%lu", &y);

	/* Print the use of find_bits: */
    printf("Bits found: %lu\n", find_bits(x,y));

    return 0;
}

unsigned long find_bits(unsigned long x, unsigned long y){

    int i, count, len = size_int();
    
    for (i = 0, count = 0; i < len; ++i, x >>= 1, y >>= 1){
        if(x & 1 && y & 1){ /*check if the bit in is x and y are ON */
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
