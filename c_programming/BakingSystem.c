/*Banking System:

1.Check Balance
2.Withdraw
3.Deposit
4.Exit

login()

menu()
*/
#include<stdio.h>
#include<string.h>

void login();
void menu();

void main()
{
    login();
}
void menu()
{
    printf("\n*******Mero Banking System*******\n");
    printf("1.Check Balance\n");
    printf("2.Withdrawal\n");
    printf("3.Deposit\n");
    printf("4.Exit\n\n");
}

void login()
{
    char usr[20], pwd[20];
    printf("Enter username: ");
    gets(usr);
    printf("Enter password: ");
    gets(pwd);
    if(strcmp(usr,"admin")==0 && strcmp(pwd,"12345")==0)
    {
        system("cls");
        printf("\nYou are logged in\n");
        menu();
    }
    else
    {
        system("cls");
        printf("\nusername and password is incorrect\n");
    }
}










