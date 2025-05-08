/*
Write a program that declares an integer, a real number, and a char, and pointers to integer, real, and char.
Associate the variables with the pointers (use &). 
Modify the values of each variable using the pointers. Print the values of the variables before and after the modification.
*/

#include <stdio.h>

int main () {
    // Variable declaration and value attribution.
    int num = 3;
    float real = 3.14;
    char lett = 'e';

    // Pointer variable declaration.
    int* np;
    float* rp;
    char* cp;

    // Assigning the addresses of the variables num, real and lett to their respective pointers.
    np = &num;
    rp = &real;
    cp = &lett;

    printf( "Values before modifications using pointers:\n" );
    printf( "Integer: %d\tReal: %.2f\tChar: %c\n\n", num, real, lett );

    // Using '*' we can change the value stored at the address the pointer is pointing to. 
    *np = 4;
    *rp = 7.57;
    *cp = 'i';

    printf( "Values after modifications using pointers:\n" );
    printf( "Integer: %d\tReal: %.2f\tChar: %c\n", num, real, lett );
}