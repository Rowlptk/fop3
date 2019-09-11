#include<stdio.h>

struct library
{
    char name[20];
    int ed;
    float price;
    char rack;
}b[3];


void main()
{
    int i,n,in=404;
    char name[20];
    for(i=0;i<=2;i++)
    {
        printf("Enter a book %d name: ",(i+1));
        gets(b[i].name);

        printf("Enter Book %d Edition: ",(i+1));
        scanf("%d",&b[i].ed);

        printf("Enter Book %d Price: ",(i+1));
        scanf("%f",&b[i].price);

        printf("Enter Book %d Rack: ",(i+1));
        scanf(" %c",&b[i].rack);
        getchar();
    }
    system("cls");
    printf("Enter a book name you want to view: ");
    gets(name);

    for(i=0;i<=2;i++)
    {
        if(strcmp(b[i].name,name)==0)
        {
            in = i;
        }
    }

    if(in==404)
    {
        system("cls");
        printf("\nBook Not found\n");
    }
    else
    {
    printf("*****Library******\n");
    printf("Name=%s\nEdition=%d\nPrice=%.2f\nRack=%c\n\n",b[in].name,b[in].ed,b[in].price,b[in].rack);
    }
}
