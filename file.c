/*File Handling:

File ==> collection of data or information or records
==> permanently store secondary storage device
==> HDD, flash Drive etc.

file operation:
open/create
read/write
close

two types:
text file
Binary file ==> content lai binary encode
*/

#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp = fopen("demo.txt","a");
    printf("Enter a sentence: \n");
    while(ch!='\n')
    {
        ch = getchar();
        fputc(ch,fp);
    }

    //fprintf(fp,"Hello");
    //fprintf(fp,"World!");
    fclose(fp);
   /*
    fp = fopen("file.c","r");
    if (fp == NULL)
    {
        printf("\nFile Not Found!\n");
    }
    else
    {
        printf("File Contents are:\n");
        while(!feof(fp))
        {
            ch = fgetc(fp);
            putchar(ch);
        }
    }
    fclose(fp);
*/
}















