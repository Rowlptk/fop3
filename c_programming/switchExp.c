#include<stdio.h>
void main()
{
    char n;
    float x,y;
    printf("Options:\n1. Add(+)\n2. Subtract(-)\n3. Multiplication(*)\n4. Division(/)");
    printf("\n\nSelect: ");
    scanf(" %c",&n);
    if(n=='+' || n=='-' || n=='*' || n=='/'||n=='1'){
        printf("\nEnter two numbers : ");
        scanf("%f%f",&x,&y);
    }
    switch(n)
    {
        case '+':
        case '1':
            printf("\nThe Addition result is %.2f\n",(x+y));
            break;
        case '-':
            printf("\nThe Difference result is %.2f\n",(x-y));
            break;
        case '*':
            printf("\nThe Multiplication result is %.2f\n",(x*y));
        break;
        case '/':
            printf("\nThe Division result is %.2f\n",(x/y));
            break;
        default:
            printf("\nSorry! This option cannot be processed\n");
    }
}
