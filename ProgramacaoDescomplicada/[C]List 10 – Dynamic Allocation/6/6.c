/*
Write a program that simulates a computer's memory: the user will specify the memory size, that is, 
how many bytes of integer type will be allocated. 
For this, the requested memory must be a multiple of the integer type's size.
Then, the user will have 2 options: insert a value at a certain position or consult the value contained in a certain position.
The memory must start with all data zeroed.
*/

#include <stdio.h>
#include <stdlib.h>

void ReadInteger( int *number );

int main() {
    int memorySize;
    int *memory;

    printf( "Input the size (in bytes) of the computer memory (must be a multiple of 4): " );
    ReadInteger( &memorySize );

    while ( ( memorySize % 4 ) != 0 ){
        printf( "Size is not multiple of 4! Input memory size again: ");
        ReadInteger( &memorySize );
    }
    printf( "\n" );

    memory = ( int * )calloc( ( memorySize / 4 ), memorySize );

    int position, op = 0;
    while ( op != 3 ){
        printf( "1. Insert a value in array\n2. Consult value of position in array.\n3. Exit.\nChoose an operation to execute: ");
        ReadInteger( &op );
        printf( "\n" );
        switch ( op ) {
            case 1:
                int value;
                printf( "Input integer value to insert in the memory: ");
                ReadInteger( &value );
                printf( "Choose position in the memory to isert the value, from %d to %d: ", 0, (memorySize / 4) - 1 );
                ReadInteger( &position );
                memory[position] = value;
                printf( "Value successfully inserted!\n\n" ); 
                break;

            case 2:
                printf( "Choose position in the memory to consult, from %d to %d: ", 0, (memorySize / 4) - 1 );
                ReadInteger( &position );
                printf( "Value stored in position %d: %d\n\n", position, memory[position] );
                break;

            case 3:
                printf( "Exiting program and freeing allocated memory...\n");
                free( memory );
                break;
            
            default:
                break;
        }
    }

}

void ReadInteger( int *number ) {
    char buffer[16];
    fgets( buffer, sizeof( buffer ), stdin );
    sscanf( buffer, "%d", number );
}