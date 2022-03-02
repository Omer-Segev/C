#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20
/*
	print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300;
	floating-point version 
*/
main()
{
	
	float fahr, celsius; 

	fahr = LOWER;
	printf("THIS IS HEADING\n");
	while (fahr <= UPPER){
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.2f\n", fahr, celsius);
		fahr = fahr + STEP;
	}
	printf("\nTHIS IS HEADING 2\n");
	for(fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP){
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f %6.2f\n", fahr, celsius);	
	}
}




