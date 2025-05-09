/*
Create a program that contains a function that allows passing two integer numbers A and B by parameter.  
The function must calculate the sum between these two numbers and store the result in variable A. 
This function should not have a return, but should modify the value of the first parameter.  
Print the values of A and B in the main function. 
*/

#include <stdio.h>

// Forward declaration of functions.
void Sum( int *a, int *b );

int main () {
    int A = 10, B = 20;
    int *ptr1 = &A, *ptr2 = &B;
    printf( "Before sum:\n" );
    printf( "A: %d\tB: %d\n\n", A, B );

    Sum( ptr1, ptr2 );

    printf( "After sum:\n" );
    printf( "A: %d\tB: %d\n", A, B );
    

}

// Stores the sum of both variables in variable a.
void Sum( int *a, int *b ) {
    *a += *b;
}