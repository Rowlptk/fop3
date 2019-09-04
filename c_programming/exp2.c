#include<stdio.h>

void main()
{
    int a, b, temp;

    printf("Enter value of a and b: ");
    scanf("%d%d",&a,&b);

    printf("Before: a = %d , b = %d",a,b);

    temp = a;
    a = b;
    b = temp;

    printf("\nAfter: a = %d , b = %d",a,b);
}
