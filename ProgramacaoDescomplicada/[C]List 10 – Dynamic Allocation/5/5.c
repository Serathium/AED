/*
Write a program that reads a number N and:

* Dynamically creates and reads an integer vector of N positions;
* Reads an integer X and counts and shows the multiples of this number that exist in the vector.
*/

#include <stdio.h>
#include <stdlib.h>

void ReadInteger( int *number );

int main() {
    int N, X;

    printf( "Input array size: " );
    ReadInteger( &N );

    int *array = ( int * )malloc( N * sizeof( int ) );

    for ( int i = 0; i < N; i++ ) {
        printf( "Input value for index %d: ", i );
        ReadInteger( &array[i] );
    }

    printf( "Input number to check for multiples in the array: " );
    ReadInteger( &X );
    printf( "\n" );

    for ( int i = 0; i < N; i++ ) {
        if ( ( array[i] % X ) == 0) {
            printf( "%d is a multiple of %d!\n", array[i], X );
        }
    }
}

void ReadInteger( int *number ) {
    char buffer[16];
    fgets( buffer, sizeof( buffer ), stdin );
    sscanf( buffer, "%d", number );
}