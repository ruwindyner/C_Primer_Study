// checking.c -- 输入验证
#include <stdio.h>
#include <stdbool.h>
// 验证输入是一个整数
long get_long(void);
// 验证范围的上下限是否有效
bool bad_limits(long begin, long en, long low, long high);
// 计算a~b之间的整数平方和
double sum_squares(long a, long b);
int main(void)
{
    const long MIN = -10000000L;        // 范围的下限
    const long MAX = +10000000L;        // 范围的上限
    long start;                         // 用户指定的范围最小值
    long stop;                          // 用户指定的范围最大值
    double answer;

    printf("这个程序用于计算一个范围内的整数平方和\n"
           "这个范围的下限不能小于-10000000，上限不能大于+10000000\n"
           "请输入范围（输入两次0退出程序）：\n"
           "下限：");
    start = get_long();
    printf("上限：");
    stop = get_long();
    while (start !=0 || stop != 0)
    {
        if (bad_limits(start, stop, MIN, MAX))
            printf("请重新输入\n");
        else
        {
            answer = sum_squares(start, stop);
            printf("从%ld到%ld的整数平方和是%g\n", start, stop, answer);
        }
        printf("请输入范围(输入两次0退出程序)：\n");
        printf("下限：");
        start = get_long();
        printf("上限：");
        stop = get_long();
    }
    printf("程序终止！\n");

    return 0;
}

// 验证输入是一个整数
long get_long(void)
{
    long input;
    char ch;

    while (scanf("%ld", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);                    // 把错误输入的值释放掉
        printf(" 不是一个整数\n请输入一个");
        printf("整数值，像25、-178、3这样的：");
    }

    return input;
}

// 计算a~b之间的整数平方和
double sum_squares(long a, long b)
{
    double total = 0;
    long i;

    for (i = a; i <= b; i++)
        total += (double)i * (double)i;

    return total;
}

// 验证范围的上下限是否有效
bool bad_limits(long begin, long end, long low, long high)
{
    bool not_good = false;

    if (begin > end)
    {
        printf("输入的第一个数%ld比第二个数%ld大\n", begin, end);
        not_good = true;
    }
    if (begin < low || end < low)
    {
        printf("输入的值必须比%ld大\n", low);
        not_good = true;
    }
    if (begin > high || end > high)
    {
        printf("输入的值必须比%ld小\n", high);
        not_good = true;
    }

    return not_good;
}
