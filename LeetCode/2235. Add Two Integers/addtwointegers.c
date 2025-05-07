#include <stdio.h>

// Function prototype.
int sum( int num1, int num2 );

int main () {
    // Single test case. Not exhaustive.
    printf( "%d\n", sum( 10, 7 ) );
}  

// Funtion implementation.
int sum( int num1, int num2 ) {
    return num1 + num2;
}