/*String ==> is a collection of Characters
==> char array

int ary[5];

_ _ _ _ _
0 1 2 3 4

char str[10]

A p p l e
_ _ _ _ _ _ _ _ _ _
0 1 2 3 4 5 6 7 8 9
*/

#include<stdio.h>
void main()
{
    char usr[20] = "admin";
    char pwd[20];
    printf("Enter Password: ");
    gets(pwd);
    //scanf("%s",pwd);
    puts(usr);
    printf("Username is %s\nPassword is %s",usr,pwd);
}







