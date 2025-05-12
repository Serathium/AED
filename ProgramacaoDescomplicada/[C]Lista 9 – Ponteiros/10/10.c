/*
10. Create a program that contains an array of integers containing 5 elements.
Using only pointer arithmetic, read this array from the keyboard and print the double of each value read.
*/

#include <stdio.h>
#include <string.h>

void ReadIntegerint( int *number );

int main () {
    int array[5];
    int *ptr = array; // The name of an array is the address of the first element of that array.

    // Reads integer, prints the double then increments the pointer, making it point 4 bytes (int) ahead, i.e.: the next array index.
    for ( int i = 0; i < ( sizeof( array ) / sizeof( array[0] ) ); i++ ){
        printf( "Input a number: " );
        ReadIntegerint( ptr );
        printf( "Double of number given: %d\n\n", *ptr * 2 );
        ptr++;
    }
}

/*
Function that reads the input as a string and stores it in the buffer,
then converts the string to int, storing the value at the address "number".
Doesn't offer error handling.
 */
void ReadIntegerint( int *number ) {
    char buffer[20];
    fgets( buffer, sizeof(buffer), stdin );
    sscanf( buffer, "%d", number );
}