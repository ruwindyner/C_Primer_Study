/* 07_cube.c -- 输入一个数打印它的立方 */
#include <stdio.h>
void cube(double n);
int main(void)
{
    double x;
    printf("请输入一个数：");
    scanf("%lf", &x);
    cube(x);

    return 0;
}
void cube(double n)
{
    double y;
    y = n * n * n;
    printf("%lf的三次方是%lf\n", n, y);
}
