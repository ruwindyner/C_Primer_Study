// power.c -- 计算数的整数幂
#include <stdio.h>
double power(double n, int p);
int main(void)
{
    double x,xpow;
    int exp;

    printf("输入一个数字和该数字的正整数次方（输入q退出）：\n");
    while(scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        printf("%g的%d次方是%g", x, exp, xpow);
        printf("输入下一对数字或者q退出\n");
    }
    return 0;
}

double power(double n, int p)
{
    double pow = 1;
    int i;

    for (i = 1; i <= p; i++)
        pow *= n;

    return pow;
}
