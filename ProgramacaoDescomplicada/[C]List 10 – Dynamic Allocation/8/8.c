/*
Write a program to store in memory a data vector containing 1500 integer values, 
using the CALLOC dynamic memory allocation function:

(a) Make a loop and check if the vector really contains the 1500 values initialized 
with zero (count the 1500 zeros in the vector). 
(b) Assign to each element of the vector the value of its index within this vector.
(c) Display the first 10 and the last 10 elements of the vector on the screen.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int *memory;
    int count = 0;

    memory = ( int * )calloc( 1500, ( 1500 * 4 ) );

    // (a)
    for( int i = 0; i < 1500; i++ ) {
        if ( memory[i] == 0 ) {
            count ++;
        }
        // (b)
        memory[i] = i;
    }

    printf( "Values initialized with zero: %d\n", count );

    printf( "\n" );

    // (c)
    for( int i = 0; i < 10; i++ ){
        printf( "Element %d of array: %d\n", i+1, memory[i] );   
    }

    printf( "\n" );

    for( int i = 10; i >= 1; i-- ){
        printf( "Element %d of array: %d\n", 1501-i, memory[1500-i] );   
    }

}