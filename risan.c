#include <stdio.h>
#include <stdbool.h>


int x_mod_y(int x, int y)
{
    return x % y;
}

int main()
{
    int x ;
    int y ;
    int amari ;
    printf("xを入力してください\n>>");
    scanf("%d", &x);
    printf("yを入力してください\n>>");
    scanf("%d", &y);
    printf("あまりを入力してください\n>>");
    scanf("%d", &amari);
    int x_ruijyou = x;
    //0乗
    if (1 % y == amari)
    {
        printf("%d", 0);
    }
    //1乗からはこれで調べる
    int i = 1;
    while(x_ruijyou % y != amari)
    {
        x_ruijyou *= x;
        ++i;
    }

    printf("離散対数は%dです\n", i);
    return 0;
}