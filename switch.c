#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    // array with 10 elements
    int array[10];
    int *ap = array; // pointer to the first element of the array

    // seed the random generator 
    srand(time(NULL));
    
    // populate the array with random numbers
    int i;
    for(i = 0; i < 10; i++) {
        array[i] = rand();
    }

    // set last value to 0
    array[9] = 0;

    // print the array
    for(i = 0; i < 10; i++) {
        printf("array[%d]: %d\n", i, array[i]);
    }

    // second array with 10 elements
    int array_two[10];
    int *atp = array_two; // pointer to the first element of the array

    // populate array_two with elements from the first array
    // but reversed
    for(i = 0; i < 10; i++) {
        *(atp + i) = *(ap + 9 - i);
    }

    // print array
    printf("\n");
    for(i = 0; i < 10; i++) {
        printf("array_two[%d]: %d\n", i, *(atp + i));
    }

    return 0;
}