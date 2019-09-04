/*Array==>variable==> is a collection multiple values
            under a same name
            under data type

int x ==> euta

declare ==> int x[5];

            _ _ _ _ _
            0 1 2 3 4
        x[0]x[1]x[2]x[3]x[4]
*/

#include<stdio.h>
void main()
{
    int ary[5] = {2,6,99,-6,3};
    printf("ary[%d] = %d ",3,ary[3]);
    ary[2] = 100;
    printf("\nary[%d] = %d ",3,ary[3]);
}









