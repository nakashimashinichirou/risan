#include "euclidean_algorithm.h"
#include "risan.h"
#include <stdio.h>
#include <stdbool.h>
#include "ransuu.h"

long long getN(long long p, long long q)
{
    return p * q;
}

long long getL(long long p, long long q)
{
    return getLCM(p-1, q-1);
}

long long getE(long long L)
{
    long long E;
    while (true)
    {
        E  = ransuu();
        printf("E探索中 E :%lld\n", E);
        if (1 < E && E < L && getGCD(E,L) == 1)
        {
            return E;
        }/* code */
    }
}

long long getD(long long E, long long L)
{
    long long D = 1;
    while(true)
    {        
        if ((E * D) % L == 1)
        {
            return D;
        }
        ++ D;
    }
}