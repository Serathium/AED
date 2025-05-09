/*
Create a program that contains a matrix of float containing 3 rows and 3 columns.
Print the address of each position of this matrix.
*/

#include <stdio.h>

int main () {
    float matrix[3][3] = 
    {
        {1, 2, 3,},
        {4, 5, 6,},
        {7, 8, 9}
    };

    // Iterate through the matrix, printing the addres and value of every element.
    for ( int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 3; j++ ) {
            printf( "Address of element in row %d column %d: %p\tElement value: %.2f\n", i+1, j+1, (void *)&matrix[i][j], matrix[i][j] );
        }
    }
}