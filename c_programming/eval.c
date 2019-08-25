#include<stdio.h>

void main()
{
    int a,b,c,x;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    x = a*b+a*b*c;
    printf("The value of x is %d\n",x);
    printf("%d x %d + %d x %d x %d = %d",a,b,a,b,c,x);
}
//1 x 2 + 1 x 2 x 3 = 8
