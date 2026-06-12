#include "euclidean_algorithm.h"
#include "risan.h"
#include <stdio.h>
#include <stdbool.h>
#include "ransuu.h"

int getL(int p, int q)
{
    return getLCM(p-1, q-1);
}

int getE(int L)
{
    int E;
    while (true)
    {
        E  = ransuu();
        printf("E探索中 E :%d\n", E);
        if (1 < E && E < L && getGCD(E,L) == 1)
        {
            return E;
        }/* code */
    }
}

int getD(int E, int L)
{
    int D;
    int amari;
    while(true)
    {
        amari = getGCD(E*D, L);
        if (amari == 1)
        {
            return D;
        }
    }
}