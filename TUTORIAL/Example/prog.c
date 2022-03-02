#include <stdio.h>
#include "data.h"

int findLargest(int []);
void getNumbers(int []);

int main() {

	int arr[size] = {0};
	int res;

	printf("\n program input : an array of %d inegers. \n" ,size);
	printf("\n program output : max number in array raised by %d\n", pw);

	getNumbers(arr);

	res = findLargest(arr);

	printf("\n the result is : %d \n", res);
	
	return 0;
}

void getNumbers(int a[]) {

	int i;
	
	printf("\n Enter %d numbers \n", size);
	for(i = 0; i < size; i++){
		scanf("%d", a+i);
	}
}


