#include<stdio.h>

int char_to_int(char num[3])
{
    int i, sum=0;

    for(i=0;i<3;i++)
    {
        if(num[i]=='1')
            sum=(sum*10)+1;
        else if (num[i]=='2')
            sum=(sum*10)+2;
        else if (num[i]=='3')
            sum=(sum*10)+3;
        else if (num[i]=='4')
            sum=(sum*10)+4;
        else if (num[i]=='5')
            sum=(sum*10)+5;
        else if (num[i]=='6')
            sum=(sum*10)+6;
        else if (num[i]=='7')
            sum=(sum*10)+7;
        else if (num[i]=='8')
            sum=(sum*10)+8;
        else if (num[i]=='9')
            sum=(sum*10)+9;
        else if (num[i]=='0')
            sum=(sum*10)+0;
    }

    return sum;

}

char int_to_char(int prod,int length_of_int)
{
    char result[100];
    int sum=0,rem,len;
    len = length_of_int;
    while (prod>0)
    {
        rem=prod%10;
        prod=prod/10;
        if(rem==1)
        {
            result[length_of_int-1]='1';
            length_of_int--;
        }
        else if(rem==2)
        {
            result[length_of_int-1]=='2';
            length_of_int--;
        }
        else if(rem==3)
        {
            result[length_of_int-1]=='3';
            length_of_int--;
        }
        else if(rem==4)
        {
            result[length_of_int-1]=='4';
            length_of_int--;
        }
        else if(rem==5)
        {
            result[length_of_int-1]=='5';
            length_of_int--;
        }
        else if(rem==6)
        {
            result[length_of_int-1]=='6';
            length_of_int--;
        }
        else if(rem==7)
        {
            result[length_of_int-1]=='7';
            length_of_int--;
        }
        else if(rem==8)
        {
            result[length_of_int-1]=='8';
            length_of_int--;
        }
        else if(rem==9)
        {
            result[length_of_int-1]=='9';
            length_of_int--;
        }
        else if(rem==0)
        {
            result[length_of_int-1]=='0';
            length_of_int--;
        }

    }

    return result[0,len-1];

}

void main()
{
    char num1[3]="123", num2[3]="123";
    int a,b,product_int,temp,int_len=0,rem,len_of_int;
    a= char_to_int(num1);
    b=char_to_int(num2);
    printf("%d %d\n",a,b);

    product_int=a*b;
    temp=product_int;

    printf("product in integer is:%d\n",product_int);

    while(temp>0)
    {
        int_len++;
        temp=temp/10;
    }

    printf("%d\n",int_len);
    len_of_int=int_len;

    char result[int_len];

    result = int_to_char(product_int,len_of_int);

    printf("Result in string format is%s",result);

}
