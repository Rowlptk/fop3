
/*structure ==> is a collection of different types of variable


eg. library book
==> name ==> string ==> char array
==> edition ==> int
==> price ==> float
==> rack ==> char
*/
/*
syntax:

    struct structure_name
    {
      variables declaration

    }structure variables;
*/

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
    int i,n;
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

    printf("Enter a book number you want to view: ");
    scanf("%d",&n);
    i = n-1;
    printf("*****Library******\n");
    printf("Name=%s\nEdition=%d\nPrice=%.2f\nRack=%c\n\n",b[i].name,b[i].ed,b[i].price,b[i].rack);
}


















