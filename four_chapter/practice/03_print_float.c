/* 03 -- 用不同格式打印小数 */
#include <stdio.h>
int main(void)
{
    float x;
    
    printf("请输入一个小数：\n");
    scanf("%f", &x);
    printf("小数点记数法：%f\n", x);
    printf("指数记数法：%e\n", x);

    return 0;
}
