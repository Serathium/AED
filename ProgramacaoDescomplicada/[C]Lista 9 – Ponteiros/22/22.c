/*
Create a function to sum two arrays. This function must receive two arrays and return the sum in a third array. 
If the size of the first and second array is different, then the function will return ZERO (0). 
If the function is completed successfully, it should return the value ONE (1). 
Use pointer arithmetic for array manipulation.
*/

#include <stdio.h>

int ArraySum( int* array1, int* array2, int* array3, int array1Size, int array2Size );
void PrintArray( int* array, int arraySize );

int main() {
    int array1[] = { 1, 2, 3, 4, 5 };
    int array2[] = { 6, 7, 8 ,9, 10 };
    int array1Size = ( int )( sizeof( array1 ) / sizeof( array1[0] ) );
    int array2Size = ( int )( sizeof( array2 ) / sizeof( array2[0] ) );
    int array3Size = array1Size + array2Size;
    int array3[ array3Size ];  // If this array is a sum of 2 arrays, then it's size must be the sum of both arrays' sizes.

    PrintArray( array1, array1Size );
    printf( "\n" );
    PrintArray( array2, array2Size ); 
    printf( "\n" );

    ArraySum( array1, array2, array3, array1Size, array2Size );

    PrintArray( array3, array3Size );  // Prints filled array3.
}

int ArraySum( int* array1, int* array2, int* array3, int array1Size, int array2Size ) {
    if ( array1Size != array2Size ) {
        return 0;
    }

    int *array3FirstElement = array3;
    int *array1LastElement = array1 + array1Size;
    int *array2LastElement = array2 + array2Size;

    /*
    Sets value of array3 = array1.
    array1 and array3 point to their respective next memory section.
    Repeat until end of array1.
    */
    while ( array1 < array1LastElement) {
        *array3 = *array1;
        array1++;
        array3++;
    }

    /*
    Sets value of array3 = array2. This doesn't overwrite array3's last value because it pointed
    to the next section of memory before ending the loop above.
    array2 and array3 point to their respective next memory section.
    Repeat until end of array1.
    */
    while ( array2 < array2LastElement) {
        *array3 = *array2;
        array2++;
        array3++;
    }
    array3 = array3FirstElement;  // array3 now points to it's first element.

    return 1;
}

void PrintArray( int* array, int arraySize ) {
    int *endOfArray = array + arraySize;

    printf( "Printing array...\n" );
    while ( array != endOfArray ) {
        printf( "%d\n", *array );
        array++;
    }
}