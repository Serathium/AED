/*
Consider the following declaration: int A, *B, **C, ***D;
 Write a program that reads the variable a and calculates and displays the double, triple,
and quadruple of this value using only the pointers B, C, and D. 
The pointer B must be used to calculate the double, C the triple, and D the quadruple.
*/

#include <stdio.h>

// Forward fuction declaration;
void ReadInteger( int *number );

int main() {
    int A, *B = &A, **C = &B, ***D = &C;

    ReadInteger( &A );

    printf( "Value of A: %d\nDouble of A: %d\nTriple of A: %d\nQuadruple of A: %d\n", A, *B, 3 * (**C), 4 * (***D) );
}

/*
Function that reads the input as a string and stores it in the buffer,
then converts the string to int, storing the value at the address "number".
Doesn't offer error handling.
 */
void ReadInteger( int *number ) {
    char buffer[10];
    printf( "Input a number: " );
    fgets( buffer, sizeof( buffer ), stdin );
    sscanf( buffer, "%d", number );
    printf( "\n" );
}