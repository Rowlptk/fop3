#include<stdio.h>
#define pi 3.1415

void main()
{
    float A,d,r;
    printf("Enter a diameter of a circle: ");
    scanf("%f",&d);
    r = d/2;
    A = pi*r*r;
    printf("The Area of Circle is %.2f ",A);
}
