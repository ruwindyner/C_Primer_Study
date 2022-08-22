/* 输入非零整除求其中奇偶数个数以及他们相应的平局书 */
#include <stdio.h>
int main(void)
{
    int i;          // 输入的数
    int odd_c = 0;      // 奇数个数
    int even_c = 0;     // 偶数个数
    int odd_s = 0;      // 奇数的和
    int even_s = 0;     // 偶数的和

    scanf("%d", &i);
    while (i != 0)
    {
        if (i % 2 == 1)
        {
            odd_c++;
            odd_s += i;
        }
        else
        {
            even_c++;
            even_s += i;
        }
        scanf("%d", &i);
    }
    printf("奇数个数：%d\n奇数平均数：%.2f\n", odd_c, (float)odd_s / odd_c);
    printf("偶数个数：%d\n偶数平均数：%.2f\n", even_c, (float)even_s / even_c);
    return 0;
}
