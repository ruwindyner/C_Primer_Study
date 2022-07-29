/* 输入一个区间，打印里面整数的平方和立方 */
#include <stdio.h>
int main(void)
{
    int i, x, y;
    long int a, b;

    printf("请输入上限和下限：");
    scanf("%d%d", &x, &y);
    printf("    值        平方        立方    \n");
    for (i = x; i <= y; i++)
    {
        a = i*i;
        b = i*i*i;
        printf("%6d%10ld%10ld\n", i, a, b);
    }

    return 0;
}
