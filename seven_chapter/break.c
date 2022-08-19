/* break.c -- 使用 break 退出循环 */
#include <stdio.h>
int main(void)
{
    float length, width;

    printf("请输入矩形的长\n");
    while (scanf("%f", &length) == 1)
    {
        printf("矩形的长：%0.2f\n", length);
        printf("请输入矩形的宽\n");
        if (scanf("%f", &width) != 1)
            break;
        printf("矩形的宽：%0.2f\n", width);
        printf("矩形的面积：%0.2f\n", length * width);
        printf("请输入矩形的长\n");
    }
    printf("结束\n");

    return 0;
}
