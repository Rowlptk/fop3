/*function ==> is a small block of code.

function declaration
function definition
function call

*/
#include<stdio.h>

// parameterless function
void add(); // function declaration

// parameterized function
int addd(int a, int b);

void main()
{
    int result;
    add(); // function call
    printf("\nThe sum is %d",addd(2,5));
    result = addd(99,372);
    printf("\nThe result is %d",result);
}

int addd(int a, int b)
{
    return (a+b);
}

// function definition
void add()
{
   int x, y;
   printf("Enter two numbers: ");
   scanf("%d%d",&x,&y);
   printf("the sum is %d",(x+y));
}





