/* 使用if else语句编写一个程序读取输入，读到#停止。用'!'替换'.',用两个'!' 替换原来的'!'，
最后报告进行了多少次替换*/
#include <stdio.h>
int main(void)
{
    char ch;
    int count = 0;

    while ((ch = getchar()) != '#')
    {
        if (ch == '.')
        {
            putchar('!');
            count++;
        }
        else if (ch == '!')
        {
            putchar('!');
            putchar('!');
            count++;
        }
        else
            putchar(ch);
    }
    printf("一共进行了%d次替换\n", count);

    return 0;
}
