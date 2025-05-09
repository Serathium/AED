/*
Create a program that contains a function that allows passing two integer numbers A and B by parameter.  
The function must calculate the sum between these two numbers and store the result in variable A. 
This function should not have a return, but should modify the value of the first parameter.  
Print the values of A and B in the main function. 
*/

#include <stdio.h>

int main () {
    int A = 10, B = 20;
    

}

void Sum( int *a, int *b ) {
    *a += *b;
}