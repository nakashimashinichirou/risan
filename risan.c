#include <stdio.h>
#include <stdbool.h>

//今回別に使ってない
long long risan()
{
    long long x ;
    long long y ;
    long long amari ;
    printf("xを入力してください\n>>");
    scanf("%lld", &x);
    printf("yを入力してください\n>>");
    scanf("%lld", &y);
    printf("あまりを入力してください\n>>");
    scanf("%lld", &amari);
    long long x_ruijyou = x;
    //0乗
    if (1 % y == amari)
    {
        printf("%lld", 0);
    }
    //1乗からはこれで調べる
    long long i = 1;
    while(x_ruijyou % y != amari)
    {
        x_ruijyou *= x;
        ++i;
    }

    printf("離散対数は%lldです\n", i);
    return 0;
}