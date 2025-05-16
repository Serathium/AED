/*
Create a function that receives two parameters: an array and a value of the same type as the array.
The function should fill the array elements with this value.
Do not use indices to traverse the array, only pointer arithmetic. 
*/

#include <stdio.h>

// Function forward declaration.
void FillArrayWithValue( int* array, int value );

int main () {
    int array[] = { 1, 2, 3, 4, 5 };
    int* ptr = array;
    int value = 99;

    for ( int i = 0; i < ( sizeof( array ) / sizeof( *array ) ); i++ ) {
        printf( "Value in index %d: %d\n", i, *ptr );
        FillArrayWithValue( ptr, value );
        ptr++;
    }
    ptr = array;
    printf( "\n" );

    for ( int i = 0; i < ( sizeof( array ) / sizeof( *array ) ); i++ ) {
        printf( "Value in index %d: %d\n", i, *ptr );
        ptr++;
    }

    
    
}

// Not sure if i understood the exercise correctly.
void FillArrayWithValue( int* array, int value ) {
    *array = value;
}