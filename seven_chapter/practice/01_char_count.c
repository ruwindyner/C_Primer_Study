#include <stdio.h>
int main(void)
{
    char ch;
    int space = 0;
    int newline = 0;
    int o_ch = 0;

    printf("请输入字符；输入'#'退出\n");
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
            space++;
        else if (ch == '\n')
            newline++;
        else
            o_ch++;
    }
    printf("空格数：%d\n换行符数：%d\n其他字符数：%d\n", space, newline, o_ch);

    return 0;
}
