/* while1.c -- 注意花括号的使用 */
/* 这是个无限循环 */
#include <stdio.h>
int main(void)
{
    int n = 0;

    while(n<3)
    {
        printf("n is %d\n", n);
        n++;
    }           /* 这里新版本的gcc好像能检测到不添加花括号的问题所以添加上了 */
    printf("That's all this program des\n");

    return 0;
}
