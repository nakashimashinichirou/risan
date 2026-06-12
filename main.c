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
    // printf("%lld\n", getGCD(1071, 1029));
    // printf("%lld\n", getLCM(1071, 1029));
    // printf("%lld\n", getGCD(49, 520));
    // return 0;
    srand((unsigned long long)time(NULL));

    printf("%lld\n", getPrimeRansuu());

    long long p = 0;
    long long q = 0;

    p = getPrimeRansuu();
    do 
    {
        q = getPrimeRansuu();
    } while (p == q);

    long long N = getN(p, q);
    long long L = getL(p, q);
    long long E = getE(L);    
    long long D = getD(E, L);

    printf("L :%lld\n", L);
    printf("E :%lld\n", E);
    printf("D :%lld\n", D);
    
    // srand((unsigned long long)time(NULL));

    // // 2. 乱数を生成する（例：0から99の範囲）
    // long long random_number = rand() % 100;
    
    // printf("生成された乱数: %lld\n", random_number);

    // long long n;
    // while (true)
    // {
    //     scanf("%lld", &n);
    //     printf("%lld\n", getPrime(n));
    // }
    
    return 0;
}