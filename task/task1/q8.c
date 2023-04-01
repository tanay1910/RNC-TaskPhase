#include<stdio.h>


int binary_to_decimal(int bin)
{
    int deci=0,i=0,rem;
    while(bin>0)
    {
        rem = bin%10;
        deci=deci+(pow(2,i)*rem);
        bin=bin/10;
        i++;
    }

    return deci;
}

int decimal_to_octal(int dec)
{
    int quotient, rem[15],i=0,j;

    do
    {
        quotient = dec/8;
        rem[i]=dec%8;
        //printf("%d ",rem[i]);
        i++;
        //printf("the value of i %d \n",i);
        dec = dec/8;

    }while (quotient!=0);

    printf("The octal number is: ");
    for(j=i-1;j>=0;j--)
    {
        printf("%d",rem[j]);
    }



}

void main()
{
    int bin=101110, dec=46, oct, rem, sum;
    int a = binary_to_decimal(bin);
    printf("The decimal number is %d\n",a);
    decimal_to_octal(a);

}
