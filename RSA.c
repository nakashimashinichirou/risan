#include "euclidean_algorithm.h"
#include "risan.h"
#include <stdio.h>
#include <stdbool.h>

int getL(int p, int q)
{
    return getLCM(p-1, q-1);
}

int getE(int E, int L)
{

    
    return getGCD(E,L);
}