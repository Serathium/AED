/*
Create a program that contains an array containing 5 integer elements.
Read this array from the keyboard and print the address of the positions containing even values.
*/

#include <stdio.h>

void ReadInteger( int *number );

int main () {
    int array[5];
    int *ptr = array;

    for ( int i = 0; i < ( sizeof( array ) / sizeof( array[0] ) ); i++ ) {
        printf( "Input a number: " );
        ReadInteger( ptr );
        if ( ( *ptr % 2 ) == 0 ) {
            printf( "\nThis memory address contains an even value: %p\n\n", (void *)ptr );
        }
        ptr++;
    }
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