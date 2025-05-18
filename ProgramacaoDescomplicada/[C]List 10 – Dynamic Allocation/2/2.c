/*
Write a program that reads the size of a vector to be read from the user and performs dynamic memory allocation.
Then, read its values from the user and print the read vector.
*/

#include <stdio.h>
#include <stdlib.h>

void ReadInteger( int *number );

int main() {
    int arraySize;
    printf( "Input amount of elements of the array: " );
    ReadInteger( &arraySize );

    int *array = (int *)malloc( arraySize * sizeof( int ) );

    for ( int i = 0; i < arraySize; i++ ) {
        printf( "Input value at of element at index %d: ", i );
        ReadInteger( &array[i] );
    }
    printf( "\n" );

    for ( int i = 0; i < arraySize; i++ ) {
        printf( "Value at of element at index %d: %d\n", i, array[i] );
    }

    free( array );  // Frees memory allocated.
}

void ReadInteger( int *number ) {
    char buffer[16];
    fgets( buffer, sizeof( buffer ), stdin );
    sscanf( buffer, "%d", number );
}