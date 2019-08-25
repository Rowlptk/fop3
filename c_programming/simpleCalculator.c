#include<stdio.h>
void main()
{
    float x,y;
    char ch;
    printf("Options:\n1. press '+' to add\n2. press '-' to sub\n3. press '*' to Mul\n4. press '/' to Div\n\nSelect : ");
    scanf(" %c",&ch);
    switch(ch)
    {
        case '+':
            printf("Enter two numbers : ");
            scanf("%f%f",&x,&y);
            printf("The Addition Result is %.2f",(x+y));
            break;
        case '-':
            printf("Enter two numbers : ");
            scanf("%f%f",&x,&y);
            printf("The Subtraction Result is %.2f",(x-y));
            break;
        case '*':
            printf("Enter two numbers : ");
            scanf("%f%f",&x,&y);
            printf("The Multiplication Result is %.2f",(x*y));
            break;
        case '/':
            printf("Enter two numbers : ");
            scanf("%f%f",&x,&y);
            printf("The Division Result is %.2f",(x/y));
            break;
        default:
            printf("Invalid Symbol ");

    }
}
