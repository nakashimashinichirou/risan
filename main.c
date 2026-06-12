#include "euclidean_algorithm.h"
#include "risan.h"
#include <stdio.h>
#include <stdbool.h>
#include "ransuu.h"
#include <time.h>
#include <stdlib.h>
#include "RSA.h"

int main()
{
    // printf("%d\n", getGCD(1071, 1029));
    // printf("%d\n", getLCM(1071, 1029));
    // printf("%d\n", getGCD(49, 520));
    // return 0;
    srand((unsigned int)time(NULL));

    printf("%d\n", getPrimeRansuu());

    int p = 0;
    int q = 0;

    p = getPrimeRansuu();
    do 
    {
        q = getPrimeRansuu();
    } while (p == q);

    int N = getN(p, q);
    int L = getL(p, q);
    int E = getE(L);    
    int D = getD(E, L);

    printf("L :%d\n", L);
    printf("E :%d\n", E);
    printf("D :%d\n", D);
    
    // srand((unsigned int)time(NULL));

    // // 2. 乱数を生成する（例：0から99の範囲）
    // int random_number = rand() % 100;
    
    // printf("生成された乱数: %d\n", random_number);

    // int n;
    // while (true)
    // {
    //     scanf("%d", &n);
    //     printf("%d\n", getPrime(n));
    // }
    
    return 0;
}