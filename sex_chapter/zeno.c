/* zeno.c -- 求序列的和 */
#include <stdio.h>
int main(void)
{
    int t_ct;       // 计数
    double time, power_of_2;
    int limit;

    printf("Please Enter number of terms you want: ");
    scanf("%d", &limit);
    for (t_ct = 1, power_of_2 = 1, time = 0; t_ct <= limit; t_ct++, power_of_2 *= 2)
    {
        time += 1 / power_of_2;
        printf("when time = %f, terms = %d\n", time, t_ct);
    }

    return 0;
}
