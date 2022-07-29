/* 输入上限和下限整数，求他们之间数（包括）的平方和 */
#include <stdio.h>
int main(void)
{
    int x, y, i, z;
    int sum;

    printf("输入整数的上限和下限：");
    z = scanf("%d%d", &x, &y);
    while(x < y && z == 2)
    {
        sum = 0;
        for (i = x; i <= y; i++)
        {
            sum += i*i;
        }
        printf("它们的平方和是%d到%d的和：%d\n", x*x, y*y, sum);
        printf("输入下一组数：");
        z = scanf("%d%d", &x, &y);
    }
    
    return 0;
}
