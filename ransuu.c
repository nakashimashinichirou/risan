#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


long long getPrime(long long num)
{
    bool isPrime = true;
    for(long long i= 2; i <= num/i; ++i)
    {
        // printf("num :%lld\n", num);
        // printf("i :%lld\n", i);
        // printf("num i :%lld\n", num % i);
        if (num % i == 0)
        {
            isPrime = false;
        }
    }
    if (isPrime && num != 1)
    {    
        return num;
    }
    return -1;
}

long long ransuu(void) {
    // 1. 乱数のシード（種）を現在時刻で初期化する
    //srand((unsigned long long)time(NULL));

    // 2. 乱数を生成する（例：0から99の範囲）
    long long random_number = rand() % 1000;
    
    //printf("生成された乱数: %lld\n", random_number);

    return random_number;
}

long long getPrimeRansuu()
{
    long long Prime = 0;
    while (true)
    {
        Prime = getPrime(ransuu());
        if (Prime != -1)
        {
            printf("獲得した素数乱数: %lld\n", Prime);
            return Prime;
        }
    }
}