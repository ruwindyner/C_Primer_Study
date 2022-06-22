/* 01_hour_min.c 将分钟转换成小时和分钟 */
#include <stdio.h>
#define M_PER_H 60  // 1小时60分钟
int main(void)
{
    int min, hour, nmin;      // 声明变量（分，时）
    printf("将分钟转换成x小时x分钟\n");
    printf("请输入分钟(<=0退出)：\n");
    scanf("%d", &min);
    while(min > 0)
    {
        hour = min / M_PER_H;   // 计算小时
        nmin = min % M_PER_H;   // 计算分钟
        printf("%d分钟时%d小时%d分钟\n", min, hour, nmin);
        printf("\n\n请输入下一个：");
        scanf("%d", &min);
    }
    return 0;

}
