/* 05_addemup_money.c -- 修改为计算赚钱的程序 */
#include <stdio.h>
int main(void)                  /* 计算前20个整数的和 */
{
    int money, day, days;             /* 声明              */

    money = 0;                  /* 表达式语句        */
    day = 0;
    printf("请输入天数：");
    scanf("%d", &days);
    while (day++ < days)        /* 迭代语句          */
        money = money + day*day;
    printf("%d天赚了 %d美元\n", days,money );  /* 表达式语句        */

    return 0;                   /* 跳转语句 */
}
