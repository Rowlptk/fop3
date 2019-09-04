#include<stdio.h>
void main()
{
    int ary[5],i;
    for(i=0;i<=4;i++){
        printf("Enter value %d ",(i+1));
        scanf("%d",&ary[i]);
    }
    printf("\nThe Inserted Values in array are as follows: \n");
    for(i=0;i<=4;i++){
        printf("ary[%d] = %d \n",i,ary[i]);
    }

    printf("\nEven Numbers are : \n");
    for(i=0;i<=4;i++){
       if(ary[i]%2 == 0)
       {
           printf("%d\n",ary[i]);
       }
    }
    printf("\nOdd Numbers are : \n");
    for(i=0;i<=4;i++){
       if(ary[i]%2 != 0)
       {
           printf("%d\n",ary[i]);
       }
    }

}

