/*
Develop a program that reads two integer values (A and B). 
Then, create a function that returns the sum of the double of the two numbers read. 
The function should store the double of A in the variable A itself and the double of B in the variable B itself.
*/

#include <stdio.h>

// Forward declaration of funcions.
void ReadInteger( int *number );
int SumOfDouble( int *number1, int *number2 );

int main () {
    int A, B;
    int *ptr1 = &A, *ptr2 = &B;

    printf( "Input the value of A: " );
    ReadInteger( ptr1 );
    printf( "Input the value of B: " );
    ReadInteger( ptr2 );
    printf( "\n" );
    printf( "Value assigned to A: %d\n", A );
    printf( "Value assigned to B: %d\n\n", B );

    printf( "Sum of the double of A and B: %d\n\n", SumOfDouble( ptr1, ptr2 ) );

    printf( "Value in variable A after function call: %d\n", A );
    printf( "Value in variable B after function call: %d\n", B );
}

/*
Function that reads the input as a string and stores it in the buffer,
then converts the string to int, storing the value at the address "number".
Doesn't offer error handling.
 */
void ReadInteger( int *number ) {
    char buffer[10];
    fgets( buffer, sizeof(buffer), stdin );
    sscanf( buffer, "%d", number );
}

// Doubles the value of each variable and returns their sum;
int SumOfDouble( int *number1, int *number2 ) {
    *number1 *= 2;
    *number2 *= 2;
    return *number1 + *number2;
}