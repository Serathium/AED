/*
Develop a function that receives two strings as parameters and checks if the second string occurs within the first.
Use pointer arithmetic to access the characters of the strings.
*/

#include <stdio.h>

void StringOccursInString( char* string1, char* string2 );

int main () {

    char string1[] = "What the dog doin";
    char string2[] = "dog";

    StringOccursInString( string1, string2 );

}

// Checks if string2 occurs in string1.
void StringOccursInString( char* string1, char* string2 ) {
    int isEqual;
    char* firstChar = string2;  // firstChar is the address of the first character in string2.

    // Iterates through string1
    while ( *string1 != '\0' ) {
        // If characters from both strings are the same.
        if ( *string2 == *string1 ){
            isEqual = 1;    // They are equal to each other.
            string2++;      // Points to the next character in string2.
            // If the next character is the null character it means string2 occurs in it's entirety in string1.
            if ( *string2 == '\0' ) {
                printf( "Second string OCCURS in the first string!\n" );
                return;
            }
        // If characters aren't the same
        } else {
            isEqual = 0;            // They are not equal to each other.
            string2 = firstChar;    // Points to the first character in string2.
        }
        string1++;      // Points to the next character in string1.
    }

    // If the while loop doesn't reach the return statement, it means the
    // second string doesn't occur in the first.
    printf( "Second string DOESN'T OCCUR in the first string!\n" );
}