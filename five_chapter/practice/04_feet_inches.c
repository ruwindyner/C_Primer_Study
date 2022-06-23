// 04_feet_inches.c -- 将输入的身高（cm）转换成英尺英寸
#include <stdio.h>
#define C_PER_I 2.54        // 1英寸 = 2.54厘米
#define I_PER_F 12          // 1英尺 = 12英寸
int main(void)
{
    double cm, inches;    // 声明变量
    int feet;

    printf("请输入身高（单位：厘米）(<=0退出)：");
    scanf("%lf", &cm);
    while(cm>0)
    {
        inches = cm / 2.54;         // 计算出英寸
        feet = (int)inches / 12;    // 计算出英尺
        inches = inches - 12 * feet;
        printf("\n%1.1f厘米 = %d英尺 = %1.1f英寸", cm, feet, inches);
        printf("\n\n请输入下一个：\n");
        scanf("%lf", &cm);
    }
    printf("bye\n");

    return 0;
}
