#include<stdio.h>
#include<string.h>

void main()
{
    int len,i;
    printf("enter the length of the string: ");
    scanf("%d",&len);
    char str[len];
    printf("enter the string: ");
    scanf("%s",&str);

    char *ptr;
    ptr=&str;
    printf("%d\n",ptr);

    printf("reversed string is: ");
    for(i=len;i>=0;i--)
    {
        printf("%c",str[i]);
    }

}
