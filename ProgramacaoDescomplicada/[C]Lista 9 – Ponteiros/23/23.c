/*
Write a function that returns the largest value of an array of size N.
Write a program that reads N integer values, prints the array with k elements per line, and the largest element.
The value of k should also be provided by the user.
*/

#include <stdio.h>

void PrintArray( int* array, int arraySize, int elementsPerLine );
int ArrayLargestValue( int* array, int arraySize );
void ReadInteger( int* number );

int main() {
    int size, elementsPerLine;

    printf( "Amount of elements desired: " );
    ReadInteger( &size );
    int array[size];

    printf( "Amount of elements per line desired: " );
    ReadInteger( &elementsPerLine );
    printf( "\n" );

    // Reads array.
    for ( int i = 0; i < size; i++ ) {
        printf( "Input the value of element %d: ", i+1 );
        ReadInteger( &array[i] );
    }
    printf( "\n" );

    PrintArray( array, size, elementsPerLine );
}

// Prints the array, printing k elements per line.
// Calls the ArrayLargestValue() function and prints the result.
void PrintArray( int* array, int arraySize, int elementsPerLine ) {
    int *arrayLastElement = array + arraySize;
    int *arrayFirstElement = array;

    while ( array < arrayLastElement ) {
        printf( "Printing %d elements: ", elementsPerLine );
        for ( int i = 0; i < elementsPerLine; i++ ) {
            if ( &array[i] >= arrayLastElement ) {
                int j = i;

                // If the for loop reaches the element after the last ( out of array ),
                // the while loop below prints the last element while i < elementsPerLine.
                while ( i < elementsPerLine ) {
                    printf( "(repeated)%d ", array[j-1] );
                    i++;
                }
                break;
            }
            printf( "%d ", array[i] );
        }
        printf( "\n" );
        array += elementsPerLine;
    }
    array = arrayFirstElement;

    printf( "Largest element in array: %d\n", ArrayLargestValue( array, arraySize ) );
}

int ArrayLargestValue( int* array, int arraySize ) {
    int *arrayLastElement = array + arraySize;
    int largestElement = -2147483648;

    while ( array < arrayLastElement ) {
        if ( largestElement < *array ) {
            largestElement = *array;
        }
        array++;
    }

    if ( arraySize == 0 ) {
        printf( "The array is empty! Returning the smallest possible 32-bit integer: -2147483648\n" );
    }
    return largestElement;
}

void ReadInteger( int* number ) {
    char buffer[10];
    fgets( buffer, sizeof( buffer ), stdin );
    sscanf( buffer, "%d", number );
}