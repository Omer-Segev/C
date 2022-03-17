/**
* File Name: my_scalar.c
* 
* @author Omer Segev
*/
#include <stdio.h>

#define MAX_LENGTH 100 /* The maximum length of the array we wiil receive from the user */

/* A method iterates through each element in the first vector, multiplying it by each element in the second vector, adding up all of those products, and returning that sum as its result.*/
int scalar_product(int [], int [], int);

int main()
{
    int length, i;
    int sc1[MAX_LENGTH] , sc2[MAX_LENGTH];
	
	/* Get the length for the arrays from the user: */
    printf("Hello, please enter the length of your vectors, max %d\n", MAX_LENGTH);
    scanf("%d", &length);

	/* Get the numbers for the first array from the user: */
    printf("Enter numbers for vector u\n");
    for (i = 0; i < length; i++){
        scanf("%d", &sc1[i]);
    }
	/* Get the numbers for the second array from the user: */
    printf("Enter numbers for vector v\n");
    for (i = 0; i < length; i++){
        scanf("%d", &sc2[i]);
    }
    
	/* Print the sum */
    printf("u * v = %d\n", scalar_product(sc1, sc2, length));
    return 0;
}


int scalar_product(int v[], int u[], int n){
    int i, result = 0;
    
    for(i = 0; i < n; i++){
        result += v[i]*u[i];/* multiplying each element in the first vector by the second vector*/
    }
    return result;
}
