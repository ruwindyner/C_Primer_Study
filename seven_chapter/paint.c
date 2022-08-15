/* paint.c -- 使用条件运算符 */
#include <stdio.h>
#define  COVERAGE 350
int main(void)
{
    int sq_feet;
    int cans;

    printf("请输入要粉刷的面积\n");
    while(scanf("%d", &sq_feet) == 1)
    {
        cans = sq_feet / COVERAGE;
        cans += (sq_feet % COVERAGE == 0) ? 0 : 1;
        printf("粉刷%d平方的墙需要%d罐油漆\n", sq_feet, cans);
        printf("请输入下一个(输入q退出)：\n");
    }

    return 0;
}
