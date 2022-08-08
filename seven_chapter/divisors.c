// divisors.c -- 使用嵌套if语句显示一个数的约数
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
        unsigned long num;   // 待测试的数
        unsigned long dev;   // 可能的约数
        bool isprime;        // 素数标记

        printf("请输入用于分析的整数；");
        printf("输入 q 退出。\n");
        while (scanf("%lu", &num) == 1)
        {
            for (dev = 2, isprime = true; (dev * dev) <= num; dev++)
            {
                if (num % dev == 0)
                {
                    if ((dev * dev) != num)
                        printf("%lu被%lu和%lu整除\n", num, dev, num/dev);
                    else
                        printf("%lu被%lu整除\n", num, dev);
                    isprime = false;
                }
            }
            if(isprime)
                printf("%lu是素数\n", num);
            printf("请输入下一个用于分析的整数；输入 q 退出\n");
        }

        return 0;
}
