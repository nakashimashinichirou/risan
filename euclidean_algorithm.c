#include<stdio.h>

long long getGCD(long long x, long long y)
{
    if (x % y == 0)
    {
        return y;
    }
    return getGCD (y, x % y);
}

long long getLCM(long long x, long long y)
{
    return (x * y) / getGCD(x, y);
}