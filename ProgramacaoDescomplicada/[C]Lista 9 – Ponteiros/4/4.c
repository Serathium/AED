/*
Write a program that reads 2 integer values and calls a function that 
receives these 2 variables and swaps their content, that is, 
this function is called passing two variables A and B for example, and 
after the execution of the function, A will contain the value of B and B will have the value of A.
*/

#include <stdio.h>

// Forward declaration of the functions.
void ReadInteger( int* number );
void SwapValues ( int* ptr1, int* ptr2 );

int main () {
    int number1, number2;
    int *ptr1 = &number1, *ptr2 = &number2;

    printf( "Input the value of the first number: " );
    ReadInteger( ptr1 );
    printf( "Input the value of the second number: " );
    ReadInteger( ptr2 );
    printf( "\n" );

    printf( "First number before swap: %d\n", number1 );
    printf( "Second number before swap: %d\n\n", number2 );

    SwapValues( ptr1, ptr2 );

    printf( "First number after swap: %d\n", number1 );
    printf( "Second number after swap: %d\n", number2 );


}

/*
Function that reads the input as a string and stores it in the buffer,
then converts the string to int, storing the value at the address "number".
Doesn't offer error handling.
 */
void ReadInteger( int* ptr ) {
    char buffer[10];
    fgets( buffer, sizeof(buffer), stdin );
    sscanf( buffer, "%d", ptr );
}

// Swaps the values stored at the two address given.
void SwapValues ( int* ptr1, int* ptr2 ) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}