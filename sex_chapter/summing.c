/* summing.c -- 根据用户键入的整数求和 */
#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;
    int status;

    printf("输入需要求和的整数");
    printf("(输入q退出)");
    status = scanf("%ld", &num);
    while(status == 1)
    {
        sum = sum + num;
        printf("请输入下一个需要求和的整数");
        printf("(输入q退出)");
        status = scanf("%ld", &num);
    }
    printf("这些数的和为：%ld\n", sum);

    return 0;
}
