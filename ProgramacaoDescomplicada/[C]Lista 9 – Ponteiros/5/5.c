/*
Write a program that reads two integer values and calls a function that receives these 2 input values and returns
 the larger value in the first variable and the smaller value in the second variable. 
Write the content of the 2 variables on the screen.
*/

#include <stdio.h>

// Forward declaration of functions.
void ReadInteger( int* number );
void CompareAndSwap( int* number1, int* number2 );

int main () {
    int number1, number2;
    int* ptr1 = &number1, *ptr2 = &number2;

    printf( "Input the first value: " );
    ReadInteger( ptr1 );
    printf( "Input the second value: " );
    ReadInteger( ptr2 );
    printf( "\n" );
    printf( "Value assigned to variable 1: %d\n", number1 );
    printf( "Value assigned to variable 2: %d\n\n", number2 );

    CompareAndSwap( ptr1, ptr2 );

    printf( "Value in variable 1 after function call: %d\n", number1 );
    printf( "Value in variable 2 after function call: %d\n", number2 );
}

/*
Function that reads the input as a string and stores it in the buffer,
then converts the string to int, storing the value at the address "number".
Doesn't offer error handling.
 */
void ReadInteger( int* number ) {
    char buffer[10];
    fgets( buffer, sizeof( buffer ), stdin );
    sscanf( buffer, "%d", number );
}

// If number2 is larger, swap values. If they are the same value, send message.
void CompareAndSwap( int* number1, int* number2 ) {
    if ( *number2 > *number1 ) {
        int temp = *number1;
        *number1 = *number2;
        *number2 = temp;
    } else if ( *number1 == *number2 ) {
        printf( "Both variables hold the same value!\n\n" );
    }
}