#include<stdio.h>

void main()
{
    int x,y,z;
    printf("Enter three numbers");
    scanf("%d%d%d",&x,&y,&z);
    (x>y && x>z)?printf("x is greatest"):
        ((y>z)?printf("y is greatest"):printf("z is greatest"));
}
