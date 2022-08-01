/* 倒序打印用户输入的内容 */
#include <stdio.h>
int main(void)
{
    char str[256];
    int i = 0;

    printf("请输入一行字符串，不得超过255位。\n本程序将倒序打印这行字符串\n");
    do
    {
        scanf("%c", &str[i]);
    }
    while(++i, str[i-1] != '\n');
    while(i--, i >= 0)
    {
        printf("%c", str[i]);
    }

    getchar();
    return 0;
}
