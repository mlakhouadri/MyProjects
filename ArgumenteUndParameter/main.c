#include <stdio.h>

float x = 3.5, y = 65.11,  z;

float haelfte_von(float k);

int main(void) {
    /*In diesem Aufruf ist x das Argument zu haelfte_von()*/
    z = haelfte_von(x);
    printf("Der Wert von z = %f\n", z);
    return 0;

    /*In diesem Aufruf ist y das Argument zu haelfte_von()*/


    z = haelfte_von(y);
    printf("Der Wert von z = %f\n", z);
    return 0;
}

float haelfte_von(float k)
{
   /*k ist der Parameter*/
   /*bei jedem Aufruf von haelfte_von() erhaelt k den Wert der als Argument uebergeben wurde*/
    return (k / 2);
}