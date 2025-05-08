/*
Write a program that contains two integer variables. Compare their addresses and display the larger address.
*/

#include <stdio.h>

// Forward declaration of the FindLargerAddress function.
int* FindLargerAddress ( int* p1, int* p2 );

int main () {
    // Declaration of integer variables.
    int number1, number2;

    // Declaration of pointers and assigning the addresses of the integer variables to their respective pointers.
    int* ptr1 = &number1, *ptr2 = &number2;
    int* largerAddress;

    printf( "Pointer ptr1 is pointing to the address: %p\n", (void *)ptr1 );
    printf( "Pointer ptr2 is pointing to the address: %p\n\n", (void *)ptr2 );

    // Calls the FindLargerAddress function and assigns the address to the pointer "largerAddress".
    largerAddress = FindLargerAddress( ptr1, ptr2 );

    // If largerAddress is not NULL, prints largerAddress;
    if ( largerAddress != NULL ) {
        printf( "The larger address is: %p\n", largerAddress );
    }
}

// Function to compare two int pointers and return the pointer with the largest address . 
// If the addres p1 is larger than p2, returns p1. Else, returns p2. If they are the same address, returns NULL.
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