/*
Write a function that accepts as a parameter an array of integers with N values, and determines the largest element
of the array and the number of times this element occurred in the array. For example, for an array
with the following elements: 5, 2, 15, 3, 7, 15, 8, 6, 15, the function should return to the program that called 
it the value 15 and the number 3 (indicating that the number 15 occurred 3 times). 
The function must be of type void. 
*/

#include <stdio.h>

void FindLargestQuantity( int *array, int size );

int main() {
    int array[] = { 5, 2, 15, 3, 7, 15, 8, 6, 15 };
    int amountOfElements = (int)( sizeof( array ) / sizeof( array[0] ) );

    FindLargestQuantity( array, amountOfElements );
}

// I thought of returning a struct, but the function is void so i can't return???
// Doesn't deal with empty array or have any error handling.
void FindLargestQuantity( int *array, int size ) {
    int *finalAddress = array + size;  // Actchually, final size + 1.
    int *firstAddress = array;

    int largestElement = *array;
    int quantity = 0;

    for ( array; array < finalAddress; array++ ) {
        if ( *array > largestElement ) {
            largestElement = *array;
        }
    }
    array = firstAddress;

    for ( array; array < finalAddress; array++ ) {
        if ( *array == largestElement ) {
            quantity++;
        }
    }

    printf( "Largest element in array: %d\n", largestElement );
    printf( "Amount of times in array: %d\n", quantity );
}