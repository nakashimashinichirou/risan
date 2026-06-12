#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


int getPrime(int num)
{
    bool isPrime = true;
    for(int i= 2; i <= num/i; ++i)
    {
        // printf("num :%d\n", num);
        // printf("i :%d\n", i);
        // printf("num i :%d\n", num % i);
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

int ransuu(void) {
    // 1. 乱数のシード（種）を現在時刻で初期化する
    //srand((unsigned int)time(NULL));

    // 2. 乱数を生成する（例：0から99の範囲）
    int random_number = rand() % 1000;
    
    //printf("生成された乱数: %d\n", random_number);

    return random_number;
}

int getPrimeRansuu()
{
    int Prime = 0;
    while (true)
    {
        Prime = getPrime(ransuu());
        if (Prime != -1)
        {
            printf("獲得した素数乱数: %d\n", Prime);
            return Prime;
        }
    }
}