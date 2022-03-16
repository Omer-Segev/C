#include <stdio.h>
#define MAX_LENGTH 100

int scalar_product(int [], int [], int);

    int u[] = {1,-2,3,-4};
    int v[] = {6,7,1,-2};
    int w[] = {5,-4,5,7};

int main()
{
    int length, i;
    int sc1[MAX_LENGTH] , sc2[MAX_LENGTH];

    printf("Hello, please enter the length of your arrays, max %d\n", MAX_LENGTH);
    scanf("%d", &length);

    printf("Enter numbers for array 1\n");
    for (i = 0; i < length; i++){
        scanf("%d", &sc1[i]);
    }

    printf("Enter numbers for array 2\n");
    for (i = 0; i < length; i++){
        scanf("%d", &sc2[i]);
    }
    
    printf("array 1 * array 2 = %d\n", scalar_product(sc1, sc2, length));
    return 0;
}

int scalar_product(int v[], int u[], int n){
    int result = 0;
    int i;
    for(i = 0; i < n; i++){
        result += v[i]*u[i];
    }
    return result;
}