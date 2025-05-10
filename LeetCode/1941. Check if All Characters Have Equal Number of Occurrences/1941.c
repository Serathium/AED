#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// Forward declaration of function.
bool areOccurrencesEqual( char* s );

int main () {
    // Two test cases, not exhaustive.
    char string1[] = "abacbc";
    char string2[] = "aaabb";

    if ( areOccurrencesEqual( string1 ) == 1 ) {
        printf( "String1 is a GOOD string!\n");
    } else {
        printf( "String1 is a BAD string!\n");
    }
    
    if ( areOccurrencesEqual( string2 ) == 1 ) {
        printf( "String2 is a GOOD string!\n");
    } else {
        printf( "String2 a BAD string!\n");
    }
}

bool areOccurrencesEqual( char* s ) {
    /* 
    Each element of the alphabet array represents a letter of the english alphabet, where
    alphabet[0] represents a and alphabet[25] represents z. Their values serve as a
    letter occurrance counter for the string given as parameter.
     */
    int alphabet[26] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int alphabetSize = ( sizeof( alphabet ) / sizeof( alphabet[0] ) );  // 26 letters in the alphabet.

    float lettersOcurrencesSum;         // Sum of occurrences of all letters in the string.
    float distinctLettersAmount = 0;    // How many distinct letters occurr in the string.
    float lastLetterOccurrances;        // Stores the value of the last non-zero alphabet array value.

    /* 
    Iterates through the string and increments the respective letter occurrance counter
    in the array at each occurrence of that letter.
    */
    for ( int i = 0; i < strlen( s ); i++ ) {
        switch ( s[i] ) {
            case 'a' :
                alphabet[0]++;
                break;
            case 'b' :
                alphabet[1]++;
                break;
            case 'c' :
                alphabet[2]++;
                break;
            case 'd' :
                alphabet[3]++;
                break;
            case 'e' :
                alphabet[4]++;
                break;
            case 'f' :
                alphabet[5]++;
                break;
            case 'g' :
                alphabet[6]++;
                break;
            case 'h' :
                alphabet[7]++;
                break;
            case 'i' :
                alphabet[8]++;
                break;
            case 'j' :
                alphabet[9]++;
                break;
            case 'k' :
                alphabet[10]++;
                break;
            case 'l' :
                alphabet[11]++;
                break;
            case 'm' :
                alphabet[12]++;
                break;
            case 'n' :
                alphabet[13]++;
                break;
            case 'o' :
                alphabet[14]++;
                break;
            case 'p' :
                alphabet[15]++;
                break;
            case 'q' :
                alphabet[16]++;
                break;
            case 'r' :
                alphabet[17]++;
                break;
            case 's' :
                alphabet[18]++;
                break;
            case 't' :
                alphabet[19]++;
                break;
            case 'u' :
                alphabet[20]++;
                break;
            case 'v' :
                alphabet[21]++;
                break;
            case 'w' :
                alphabet[22]++;
                break;
            case 'x' :
                alphabet[23]++;
                break;
            case 'y' :
                alphabet[24]++;
                break;
            case 'z' :
                alphabet[25]++;
                break;
        }
    }

    // Loops 26 times.
    for ( int i = 0; i < alphabetSize; i++ ) {
        /* 
        If the letter occurance counter (alphabet[i]) isn't 0, adds alphabet[i]'s value
        to lettersOcurrencesSum, assigns alphabet[i]'s value to lastLetterOccurrances
        and increments distinctLettersAmount;
         */
        if ( alphabet[i] != 0 ) {
                lettersOcurrencesSum += alphabet[i];
                lastLetterOccurrances = alphabet[i];
                distinctLettersAmount++; 
        }
    }

    /* 
    A string is good if all the characters that appear in it have the same number
    of occurrences. Therefore, to be a good string, The sum of occurrences of all
    letters in the string divided by the amount of distinct letters in the string
    must be equal to any non-zero value in alphabet[].

    The following if statement would break if the string sent was empty 
    (division by 0 error), but this specific problem states that 1 <= s.length <= 1000, 
    so it's not a problem here.
    */
    if ( ( lettersOcurrencesSum / distinctLettersAmount ) == lastLetterOccurrances ){
        return true;
    } else {
        return false;
    }
}