#include<stdio.h>


void main()
{
    FILE *fp;
    int d,I=0;
    fp = fopen("balance1.txt","r");
    fscanf(fp,"%d",&I);
    fclose(fp);

    fp = fopen("balance1.txt","w");
    printf("Current Balance is %d\n",I);
    printf("Enter deposit amount: ");
    scanf("%d",&d);
    I = I + d;

    fprintf(fp,"%d",I);
    printf("Total Balance Now: %d",I);
    fclose(fp);
}
