#include<stdio.h>

void find_rem(float dividend, float divisor, float q)
{
    float  rem = dividend - divisor;

    if (rem>=divisor)
    {
        //printf("loop entered");
        q++;
        find_rem(rem,divisor,q);
    }
    else
        printf("quotient = %f and remainder = %f",++q,rem);
}

void main()
{
    float dividend=57.0, divisor=8.0, q=0.0, rem;

    find_rem(dividend,divisor,q);
}
