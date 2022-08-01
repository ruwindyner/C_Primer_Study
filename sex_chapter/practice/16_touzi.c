/* 比较单利息投资和复合利息投资 */
#include <stdio.h>
#define SIN_INTEREST 0.10           // 单利息利率
#define DOU_INTEREST 0.05           // 复合利息利率
int main(void)
{
    double sin = 100, dou = 100;    // 初始资金
    int year = 0;
    
    printf("year    sin             dou\n");
    while (dou <= sin)
    {
        year++;
        sin += 100 * SIN_INTEREST;
        dou += dou * DOU_INTEREST;
        printf("%d    %-9f    %-9f\n", year, sin, dou);
    }

    return 0;
}
