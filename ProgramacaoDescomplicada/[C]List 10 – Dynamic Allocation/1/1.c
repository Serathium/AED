/*
Create a program that:

(a) Dynamically allocates an array of 5 integers,
(b) Asks the user to enter the 5 numbers in the allocated space,
(c) Displays the 5 numbers on the screen,
(d) Frees the allocated memory.
*/

#include <stdio.h>
#include <stdlib.h>

// Function forward declaration;
void ReadInteger( int *number );

int main () {
    int arraySize = 5;
    int *array = ( int * )malloc( arraySize * sizeof( int ) );  // Dynamically allocates 5 integers.

    // Reads 5 number from user and stores them in the dynamically allocated space.
    for ( int i = 0; i < arraySize; i++ ) {
        printf( "Input a value at index %d: ", i );
        ReadInteger( &array[i] );
    }
    printf( "\n" );

    // Displays array elements.
    for ( int i = 0; i < arraySize; i++ ) {
        printf( "Array value at index %d: %d\n", i, array[i] );
    }

    free( array );  // Frees allocated memory.
}

void ReadInteger( int *number ) {
    char buffer[16];
    fgets( buffer, sizeof( buffer ), stdin );
    sscanf( buffer, "%d", number );
}