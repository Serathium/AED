/*
Implement a function that receives as a parameter an array of real numbers of size N and returns 
how many negative numbers there are in this array.
This function must obey the prototype: int Negatives ( float *vet, int N );
*/

#include <stdio.h>

int Negatives ( float *array, int elementsQuantity );

int main () {
    float array[] = { -8, -5, -1, -0.56, 0, 1, 5, 19, 45 };
    int elementsQuantity = (int)( sizeof( array ) / sizeof( array[0] ) );
    int negativesQuantity;

    negativesQuantity = Negatives( array, elementsQuantity );
    printf( "There are %d negative numbers in the array!\n", negativesQuantity );
}

int Negatives ( float *array, int elementsQuantity ) {
    float *lastAddress = array + elementsQuantity;
    int negativesQuantity = 0;

    while ( array < lastAddress ) {
        if ( *array < 0 ) {
            negativesQuantity++;
        }
        array++;
    }
    return negativesQuantity;
}