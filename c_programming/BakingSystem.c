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
void check_balance();
void withdraw();
void deposit();
void proceed();


int T = 1000;

void main()
{
    login();
}

void proceed()
{
    char ch;
    printf("\nPress Y to continue... ");
    scanf(" %c",&ch);
    if(ch=='Y'||ch=='y')
    {
        menu();
    }
    else
    {
        printf("\nYou have been logged out!\n");
    }

}

void deposit()
{
    int da;
    printf("\nEnter a Deposit Amount: ");
    scanf("%d",&da);
    if(da<=20000)
    {
        T = T + da;
        printf("\nDeposited Amount: %d\n",da);
        printf("\nTotal Balance: %d\n",T);
    }
    else
    {
        printf("\nDeposit Amount Exceeds Daily Limit 20000\n");
    }
    proceed();
}

void withdraw()
{
    int wa;
    printf("\nEnter a Withdraw Amount: ");
    scanf("%d",&wa);
    if(wa<=T)
    {
        T = T - wa;
        printf("\nAmount Withdrawal : %d\n",wa);
        printf("\nTotal Balance : %d\n",T);
    }
    else
    {
        printf("\nWithdraw Amount Exceeds Current Balance\n");
    }
    proceed();
}

void check_balance()
{
    printf("\nYour Current Balance is %d\n",T);
    proceed();
}

void menu()
{
    int n;
    printf("\n*******Mero Banking System*******\n");
    printf("1.Check Balance\n");
    printf("2.Withdrawal\n");
    printf("3.Deposit\n");
    printf("4.Exit\n\n");
    printf("Select: ");
    scanf("%d",&n);
    system("cls");
    switch(n)
    {
    case 1:
        check_balance();
        break;
    case 2:
        //system("cls");
        withdraw();
        break;
    case 3:
        //system("cls");
        deposit();
        break;
    case 4:
        exit(0);

    default:
        //system("cls");
        printf("\nInvalid Option! \n");
        proceed();
    }
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










