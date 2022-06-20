/* 尝试自己写 */
#include <stdio.h>
#define CHECKERBOARD 64 // 64个格子
int main(void)
{
    const double CROP = 2E16;     // 年总产量
    double current, total;
    int count;

    count = 1;
    total = current = 1.0;      // 从1粒谷子开始
    printf("格子数      当前格子        总计谷子    占世界谷\n");
    printf("            谷子数量        的数量      粒总量\n");
    printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
    while(count < CHECKERBOARD)
        {
            count = count + 1 ;
            current = current * 2 ;
            total = total + current;
            printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
        }

    return 0;
}
