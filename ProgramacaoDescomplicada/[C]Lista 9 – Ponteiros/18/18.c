/*
Implement a function that calculates the surface area and the volume of a sphere of radius R. This function must obey the prototype: 
`void calc_esfera (float R, float *area, float *volume)` 
The surface area and the volume are given, respectively, by: A = 4 * p * R^2 V = 4/3 * p * R^3
*/

#include <stdio.h>
#include <math.h> // Use -lm flag at the end of compilation command.

// Forward function declaration.
void CalcSphere ( float R, float *area, float *volume );

int main () {
    float radius = 5.23, area, volume;

    CalcSphere( radius, &area, &volume );

    printf( "Sphere surface area: %.2f\nSphere volume: %.2f\n", area, volume );
}

void CalcSphere ( float R, float *area, float *volume ) {
    *area = 4.0 * M_PI * ( R * R );
    *volume = ( 4.0 / 3.0 ) * M_PI * pow( R, 3 );
}