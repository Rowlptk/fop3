#include<stdio.h>
#include<string.h>
void main()
{
    char usr[20] = "admin";
    char pwd[20] = "12345";
    char usrIn[20], pwdIn[20];
    printf("Enter username : ");
    gets(usrIn);
    printf("Enter Password : ");
    gets(pwdIn);
    if((strcmp(usr,usrIn)==0)&&(strcmp(pwd,pwdIn)==0)){
        system("cls");
        printf("\nyou are logged in\n");
    }
    else
    {
        system("cls");
        printf("\nusername or password is incorrect\n");
    }
}
