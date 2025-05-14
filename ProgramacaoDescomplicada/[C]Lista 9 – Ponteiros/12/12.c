/*
Write a program that reads three integer values and calls a function that receives these 3 input values and returns them sorted, 
that is, the smallest value in the first variable, the second smallest value in the middle variable, 
and the largest value in the last variable. 
The function must return the value 1 if the three values are equal and 0 if there are different values.
Display the sorted values on the screen.
*/

#include <stdio.h>

void ReadInteger( int* number );
int Sort3Integers( int* number );

int main () {
    int array[3];
    int* ptr = array;

    for ( int i = 0; i < ( sizeof( array ) ) / sizeof( array[0] ); i++ ) {
        printf( "Input a number: ");
        ReadInteger( ptr );
        ptr++;
    }

    printf("\nArray: %d, %d, %d\n", *( ptr-3 ), *( ptr-2 ), *( ptr-1 ) );

    Sort3Integers( ptr );

    printf("Sorted array: %d, %d, %d\n", *( ptr-3 ), *( ptr-2 ), *( ptr-1 ) );
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

/* A complicated Sort 3 Integers function that may return early
instead of always running 4 IF statements.
*/
int Sort3Integers( int* number ) {
    int temp;
    if ( *( number-1 ) == *( number-2 ) == *( number-3 ) ) {
        return 1;
    } else if ( *( number-3 ) > *( number-1 ) ) {
        temp = *( number-1 );
        *( number-1 ) = *( number-3 );
        *( number-3 ) = temp;
        if( *( number-2 ) <= *( number-1 ) ) {
            return 0;
        } else {
            temp = *( number-2 );
            *( number-2 ) = *( number-1 );
            *( number-1 ) = temp;
            return 0;
        }
    } else if ( *( number-3 ) <= *( number-2 ) ) {
        if ( *( number-2 ) <= *( number-1 ) ) {
            return 0;
        } else {
            temp = *( number-2 );
            *( number-2 ) = *( number -1 );
            *( number-1 ) = temp;
            return 0;
        }
    } else {
        temp = *( number -3 );
        *( number-3 ) = *( number -2);
        *( number-2 ) = temp;
        return 0;
    }
}