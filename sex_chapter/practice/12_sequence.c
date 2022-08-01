/* 计算两个无限序列的结果 */
#include <stdio.h>
int main(void)
{
        double sum1 = 0.0, sum2 = 0.0;
        int index, indexs;
        double x = 1.0;
        double y = 1.0;

        printf("请输入项数：");
        scanf("%d", &indexs);
        for (index = 1; index <= indexs; index++, y += 1.0)
        {
            sum1 += (x / y);
        }
        printf("sum1 = %lf", sum1);
        y = 1.0;
        for (index = 1; index <= indexs; index++, y = y + 1.0, x *= -1)
        {
            sum2 += (x / y);
        }
        printf("\nsum2 = %lf\n", sum2);

        return 0;

}
