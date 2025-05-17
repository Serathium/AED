/*
Write a function that receives an array of integers V and the addresses of two integer variables,
min and max, and stores in these variables the minimum and maximum value of the array.
Also write a main function that uses this function.
*/

#include <stdio.h>

void MinMax ( int *array, int arraySize, int *min, int *max );
void PrintArray( int* array, int arraySize );
void ReadInteger( int* number );

int main() {
    int min = -2147483648, max = 2147483647, size;

    printf( "Amount of elements desired: " );
    ReadInteger( &size );
    int array[size];

    // Reads array.
    for ( int i = 0; i < size; i++ ) {
        printf( "Input the value of element %d: ", i+1 );
        ReadInteger( &array[i] );
    }
    printf( "\n" );

    MinMax( array, size, &min, &max );

    PrintArray( array, size );
    printf( "\n" );
    printf( "Min value: %d\nMax value: %d\n", min, max );
}

void MinMax ( int *array, int arraySize, int *min, int *max ) {
    int *lastArrayElement = array + arraySize;
    *min = *array;
    *max = *array;

    while ( array < lastArrayElement ) {
        if ( *array > *max ) {
            *max = *array;
        }
        if ( *array < *min ) {
            *min = *array;
        }
        array++;
    }
}

void PrintArray( int* array, int arraySize ) {
    int *endOfArray = array + arraySize;

    printf( "Printing array...\n" );
    while ( array != endOfArray ) {
        printf( "%d\n", *array );
        array++;
    }
}

void ReadInteger( int* number ) {
    char buffer[10];
    fgets( buffer, sizeof( buffer ), stdin );
    sscanf( buffer, "%d", number );
}