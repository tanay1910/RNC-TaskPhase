#include<stdio.h>
#include<string.h>


int main()
{
    char num1[3]="123", num2[3]="123";
    int a,b,i,sum=0,sum1=0;
    for (i=0;i<strlen(num1)-1;i++)
    {
        if(num1[i]=='1')
            sum=sum*10+1;
        else if (num1[i]=='2')
            sum=(sum*10)+2;
        else if (num1[i]=='3')
            sum=(sum*10)+3;
            else if (num1[i]=='4')
            sum=(sum*10)+4;
            else if (num1[i]=='5')
            sum=(sum*10)+5;
            else if (num1[i]=='6')
            sum=(sum*10)+6;
            else if (num1[i]=='7')
            sum=(sum*10)+7;
            else if (num1[i]=='8')
            sum=(sum*10)+8;
            else if (num1[i]=='9')
            sum=(sum*10)+9;
            else if (num1[i]=='0')
            sum=(sum*10)+0;
    }

    for (i=0;i<strlen(num2)-1;i++)
    {
        if(num2[i]=='1')
            sum1=sum1*10+1;
        else if (num2[i]=='2')
            sum1=(sum1*10)+2;
        else if (num2[i]=='3')
            sum1=(sum1*10)+3;
            else if (num2[i]=='4')
            sum1=(sum1*10)+4;
            else if (num2[i]=='5')
            sum1=(sum1*10)+5;
            else if (num2[i]=='6')
            sum1=(sum1*10)+6;
            else if (num2[i]=='7')
            sum1=(sum1*10)+7;
            else if (num2[i]=='8')
            sum1=(sum1*10)+8;
            else if (num2[i]=='9')
            sum1=(sum1*10)+9;
            else if (num2[i]=='0')
            sum1=(sum1*10)+0;
    }



    printf("the first number is %d \n",sum);
    printf("the second number is %d\n",sum1);

    int product = sum*sum1;

    printf("The product is %d",product);

    int temp=product,product_length=0,rem;

    while(temp>0)
    {

        product_length++;
        temp=temp/10;

    }

    char result[product_length];

    while(product>0)
    {
        rem = product%10;
        result[product_length-1]=rem;
        product=product/10;
        product_length=product_length-1;
    }

    printf("%c",result);

    return 0;

}
