#include<stdio.h>

void main()
{
    int i;
    for(i=1;i<=30;i++)
    {
        if(i%3==0 && i%9!=0)
        {
            printf("%d ",i);
        }

    }
}
