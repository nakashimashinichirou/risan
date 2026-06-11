#include<stdio.h>

int getGCD(int x, int y)
{
    if (x % y == 0)
    {
        return y;
    }
    return getGCD (y, x % y);
}

int getLCM(int x, int y)
{
    return (x * y) / getGCD(x, y);
}