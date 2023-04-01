#include<stdio.h>

void main()
{


    //q6-completed

    int no_of_rows=5, i,j;

    for(i=1;i<=no_of_rows;i++)
    {
        for (j=0;j<i;j++)
        {
            printf("\t");
        }
        for (j=0;j<=(2*no_of_rows-2*i);j++)
        {
            printf("*\t");
        }
        printf("\n");
    }


}
