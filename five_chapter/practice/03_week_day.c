/* 03_week_day.c -- 输入天数转换成周和天 */
#include <stdio.h>
const int D_PER_W = 7;          // 一周有7天
int main(void)
{
    int days, week, day;

    printf("这个程序能将天数转化成X周x天\n");
    printf("请输入天数(<=0退出):");
    scanf("%d", &days);
    while(days>0)
    {
        week = days / D_PER_W;
        day = days % D_PER_W;
        printf("\n%d天是%d周%d天\n", days, week, day);
        printf("\n\n请输入下一个：");
        scanf("%d", &days);
    }

    return 0;
}
