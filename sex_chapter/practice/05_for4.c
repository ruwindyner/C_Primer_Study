/* 使用大写字母打印一个金字塔 */
#include <stdio.h>
int main(void)
{
    char i, j, x;

    printf("请输入一个大写字母：");
    scanf("%c", &x);
    for (i = 'A'; i <= x; i++)
    {
        for (j = i; j < x; j++)
        {
            printf(" ");
        }
        for (j = 'A'; j < i; j++)
        {
            printf("%c", j);
        }
        for (j = i; j >= 'A'; j--)
        {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}
