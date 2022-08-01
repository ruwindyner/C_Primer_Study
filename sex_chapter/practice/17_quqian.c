/* 100万美元存入银行，每年取10万，多少年后会取完 */
#include <stdio.h>
int main(void)
{
    double money = 100;
    int year = 0;

    while(money >= 0)
    {
        money += money * 0.08;
        money -= 10;
        year++;
        printf("%-9f    %d\n",money,year);
    }
    printf("%d年后会取完\n", year);

    return 0;
}
