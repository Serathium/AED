/*
Write a program that contains two integer variables. 
Read these variables from the keyboard. Then, compare their addresses and display the content of the larger address.
*/

#include <stdio.h>
#include <string.h>

// Forward declaration of the functions.
void ReadInteger ( int* number );
int* FindLargerAddress ( int* p1, int* p2 );

int main () {
    int number1, number2;
    int *ptr1 = &number1, *ptr2 = &number2, *largerAddress;

    printf( "Insert the value of the first number: " );
    ReadInteger( ptr1 );
    printf( "Insert the value of the second number: " );
    ReadInteger( ptr2 );
    printf( "\n" );

    printf( "Number 1: %d\n", number1 );
    printf( "Address of number 1: %p\n", (void *)ptr1 );
    printf( "Number 2: %d\n", number2 );
    printf( "Address of number 2: %p\n\n", (void *)ptr2 );

    largerAddress = FindLargerAddress( ptr1, ptr2 );

    if ( largerAddress != NULL ) {
        printf( "The content of the larger address is: %d\n", *largerAddress );
    }
}

/*
Function that reads the input as a string and stores it in the buffer,
then converts the string to int, storing the value at the address "number".
Doesn't offer error handling.
 */
void ReadInteger (int* number){
    char buffer[10];
    fgets( buffer, sizeof(buffer), stdin );
    sscanf( buffer, "%d", number );
}

// Function to compare two int pointers and return the pointer with the largest address. 
// If the addres p1 is larger than p2, returns p1. If p2 is larger than p1, returns p2. Else, returns NULL.
int* FindLargerAddress ( int* p1, int* p2 ) {
    if ( p1 > p2 ) {
        return (int *)p1;
    } else if ( p2 > p1 ) {
        return (int *)p2;
    } else {
        printf( "They are the same address!\n" );
        return NULL;
    }
}