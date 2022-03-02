#include <stdio.h>

/*
	print Celsius-Fahrenheit table for celsius = 0, 5, 10, ..., 60;
	floating-point version 
*/

main(){
	
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0; /* lower limit of temperature table. */
	upper = 60; /* uper limit. */
	step = 5; /* step size. */

	celsius = lower;
	while (celsius <= upper){
		fahr = (9.0/5.0) * (celsius + 32.0);
		printf("%3.0f %6.2f\n", celsius, fahr);
		celsius = celsius + step;
	}

}
