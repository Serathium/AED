/*
Write a function that, given a real number passed as a parameter, returns the integer part and the fractional part of this number.
Write a program that calls this function. 
Prototype: void frac(float num, int* integer, float* frac);
*/

#include <stdio.h>

// Forward function declaration;
void Frac( float num, int* integer, float* frac );

int main() {
    float num = 3.141592, frac;
    int integer;

    Frac( num, &integer, &frac );

    printf( "Integer: %d\nFraction: %f\n", integer, frac );
}

void Frac( float num, int* integer, float* frac ) {
    *integer = num;
    *frac = num - *integer;
}