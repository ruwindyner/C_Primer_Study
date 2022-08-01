/* colddays.c -- 找出0℃一下的天数占总天数的百分比 */
#include <stdio.h>
int main(void)
{
    const int FREEZINE = 0;
    float temperture;
    int all_days = 0;
    int cold_days = 0;

    printf("输入每日低温列表\n");
    printf("使用摄氏度，输入q退出\n");
    while(scanf("%f", &temperture) == 1)
    {
        all_days++;
        if (temperture < FREEZINE)
            cold_days++;
    }
        if (all_days != 0)
            printf("总共%d天，其中%.1f%%低于0摄氏度\n",
            all_days, 100.0 * (float)cold_days / all_days);
        if (all_days == 0)
            printf("没有输入数据\n");

    return 0;
}
