/*
Write a program that receives the size of a string from the user and calls a function to dynamically allocate that string.
Then, the user must inform the content of this string. The program prints the string without its vowels.
*/

#include <stdio.h>
#include <stdlib.h>

void ReadInteger( int *number );
char *AllocateString( int stringSize );
void remove_spaces(char* s) ;

int main() {
    int stringSize;
    printf( "Input size of string: " );
    ReadInteger( &stringSize );

    char *string = AllocateString( stringSize );
    printf( "Input string: " );
    fgets( string, stringSize, stdin );

    for ( int i = 0; i < stringSize; i++ ) {
        if ( string[i] == 'a' || string[i] == 'A' || string[i] == 'e' || string[i] == 'E' || string[i] == 'i' || string[i] == 'I' || 
        string[i] == 'o' || string[i]== 'O' || string[i] == 'u' || string[i] == 'U' ) {
            string[i] = ' ';
        }
    }

    printf( "String without vowels: %s\n", string );
}

void ReadInteger( int *number ) {
    char buffer[16];
    fgets( buffer, sizeof( buffer ), stdin );
    sscanf( buffer, "%d", number );
}

char *AllocateString( int stringSize ) {
    return (char *)malloc( stringSize * sizeof( char ) );
}