/*
Write a program that declares an array of integers and a pointer to integers.
Associate the pointer to the array.
Now, add one (+1) to each position of the array using the pointer (use *).
*/

#include <stdio.h>

void PrintArray( int* array, int arraySize );  // Borrowed from 15.c ...

int main() {
    int array[] = { 9, 19, 29, 39, 49 };
    int arrayElementsQuantity = ( int )( sizeof( array ) / sizeof( array[0] ) );
    int *ptr = array;

    PrintArray( array, arrayElementsQuantity );

    while ( ptr < ( array + arrayElementsQuantity ) ) {
        (*ptr)++;  //Why? Just why, C??
        ptr++;
    }

    PrintArray( array, arrayElementsQuantity );
}

void PrintArray( int* array, int arraySize ) {
    int *endOfArray = array + arraySize;

    printf( "Printing array...\n" );
    while ( array != endOfArray ) {
        printf( "%d\n", *array );
        array++;
    }
}