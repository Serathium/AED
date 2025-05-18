/*
Write a program that reads the size of a vector to be read from the user and performs dynamic memory allocation.
Then, read its values from the user and show how many of the numbers are even and how many are odd.
*/

#include <stdio.h>
#include <stdlib.h>

void ReadInteger( int *number );

int main() {
    int arraySize, odd, even;
    printf( "Input amount of elements in array: " );
    ReadInteger( &arraySize );

    int *array = ( int * )malloc( arraySize * sizeof( int ) );

    for ( int i = 0; i < arraySize; i++ ) {
        printf( "Input value at index %d: ", i );
        ReadInteger( &array[i] );
        if ( ( array[i] % 2 ) == 0) {
            even++;
        } else {
            odd++;
        }
    }
    printf( "\n" );

    for ( int i = 0; i < arraySize; i++ ) {
        printf( "Value at index %d: %d\n", i, array[i] );
    }

    printf( "Amount of odd numbers: %d\n", odd );
    printf( "Amount of even numbers: %d\n", even );

}

void ReadInteger( int *number ) {
    char buffer[16];
    fgets( buffer, sizeof( buffer ), stdin );
    sscanf( buffer, "%d", number );
}