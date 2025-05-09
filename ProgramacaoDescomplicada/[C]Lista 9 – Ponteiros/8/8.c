/*
Create a program that contains an array of float containing 10 elements.
Print the address of each position of this array.
*/

#include <stdio.h>

int main () {
    float array[10] = { 1.5, 2.23, 3.14, 4.09, 5, 6, 7, 8, 9, 10 };

    // Iterate through the array, printing the addres and value of every element.
    for ( int i = 0; i < 10; i++ ) {
        printf( "Address of element %d: %p\tElement value: %.2f\n", i+1, (void *)&array[i], array[i] );
    }
}