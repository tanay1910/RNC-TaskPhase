#include<stdio.h>

void main()
{
    int sorted_array[10]={1,4,8,11,23,25,26,27,28,30};
    int target,i,len=10,found=0,target_index;

    printf("enter the req number: ");
    scanf("%d",&target);

    for(i=0;i<len;i++)
    {
        if (sorted_array[i]==target)
        {
            found=1;
            target_index=i;
        }

    }

    if(found==1)
    {
        printf("element found at index %d",target_index);
    }
    else
    {
        if(target<sorted_array[0])
            printf("target element would have been on index 0");
        else if (target>sorted_array[10])
            printf("target element at index 11");
        else
        for(i=0;i<len;i++)
        {
            if(target>sorted_array[i]&&target<sorted_array[i+1])
                printf("target would have been on index %d",i+1);
        }

    }

}
