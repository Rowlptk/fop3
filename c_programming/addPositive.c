#include<stdio.h>
void main()
{
    int a,b;

    printf("Enter First Number: ");
    scanf("%d",&a);
    while(a<0)
    {
        printf("Enter Positive Value Only: ");
        scanf("%d",&a);
    }


    printf("\nEnter Second Number: ");
    scanf("%d",&b);
    while(b<0)
    {
        printf("Enter Positive Value Only: ");
        scanf("%d",&b);
    }

    printf("\nThe Addition Result is %d\n\n",(a+b));
}
