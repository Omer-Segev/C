#include <math.h>
#include "data.h"

int findLargest(int a[]) {
	
	int i, max = a[0];

	for(i = 0; i < size; i++){
		max = (a[i] > max) ? a[i] : max;
	}

	return pow(max,pw);
}



