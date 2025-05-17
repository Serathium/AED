/*
Create a function that receives an array as a parameter and prints it.
Do not use indices to traverse the array, only pointer arithmetic.
*/

#include <stdio.h>

// Function forward declaration.
void PrintArray( int* array, int arraySize );

int main () {
    int array[] = { 1, 24, 3, 4, 5, 6, 7, 8, 9, 109 };
    int arraySize = sizeof( array ) / sizeof( array[0] );

    printf( "Full array byte size: %ld\n", sizeof( array ) );

    printf( "Array element byte size: %ld\n", sizeof( array[0] ) );
    printf( "Amount of elements in array: %d\n\n", arraySize );

    printf( "Array first element address: %p\n", (void *)array );
    printf( "Array first addres + array size: %p\n", (void *)(array + arraySize) );
    printf( "Array last element address (Array first addres + array size - 1): %p\n\n", (void *)&array[9] );
    
    PrintArray( array, arraySize );
}

void PrintArray( int* array, int arraySize ) {
    int *endOfArray = array + arraySize;

    printf( "Printing array...\n" );
    while ( array != endOfArray ) {
        printf( "%d\n", *array );
        array++;
    }
}