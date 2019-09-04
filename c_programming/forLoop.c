#include<stdio.h>
void main()
{
    int i,n,m;
    printf("Enter Kun wanza? ");
    scanf("%d",&n);
    printf("Kaha samma garne? ");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        printf("%d x %d = %d\n",n,i,(n*i));
    }
}
