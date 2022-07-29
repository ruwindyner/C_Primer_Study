/* 输入两个浮点数，打印两个数的差除以乘积的结果 */
#include <stdio.h>
#include <math.h>
int main(void)
{
    double x, y, a, b;

    printf("请输入两个浮点（输入q退出）：");
    while(scanf("%lf%lf", &x, &y) == 2)
    {
        a = fabs(x - y);
        b = (x * y);
        printf("结果为：%.2lf", a / b);
        printf("\n请输入下一组数（输入q退出）：");
    }
    
    return 0;
}
