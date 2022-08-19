/* skippart.c -- 使用 continue 跳过部分循环 */
#include <stdio.h>
int main(void)
{
    const float MAX = 100.0f;
    const float MIN = 0.0f;
    float score;
    float total = 0.0f;
    int n;
    float min = MAX;
    float max = MIN;

    printf("请输入第一个成绩（q退出）\n");
    while (scanf("%f", &score) == 1)
    {
        if (score < MIN || score > MAX)
        {
            printf("请输入一个有效的成绩\n");
            continue;
        }
        printf("接受成绩%0.1f:\n", score);
        min = (score < min) ? score : min;
        max = (score > max) ? score : max;
        total += score;
        n++;
        printf("请输入下一个成绩（q退出）\n");
    }
    if (n > 0)
    {
        printf("这个%d个成绩的平均分是%0.1f\n", n, total / n);
        printf("最低分：%0.1f, 最高峰：%0.1f\n", min, max);
    }
    else
        printf("没有输入有效成绩\n");

    return 0;
}
