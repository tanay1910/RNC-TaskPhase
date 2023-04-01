#include<stdio.h>

int binary_search(int sorted_array[10],int hi,int lo,int target)
{


    int mid = (hi+lo)/2;

    if (hi>lo)
    {
      if (sorted_array[mid]==target)
    {
        return mid;
    }
    else if(target<sorted_array[mid])
    {
        binary_search(sorted_array[10],mid-1,lo,target=8);
    }
    else if (target>sorted_array[mid])
    {
        binary_search(sorted_array,hi,mid+1,target);
    }
    }
    else
        return -1;

}

void main()
{
    int sorted_array[10]={1,4,5,6,7,8,10,11,15,18},hi=0,lo=9,mid,target=8;
    int a = binary_search(sorted_array,hi=10,lo=0,target=8);

    if (a==-1)
    {
        printf("Value not found");
    }
    else
        printf("Target element at %d",a);



}
