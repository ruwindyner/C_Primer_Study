/* 打印输入的字符及其ascii码，并且要求每行只能打印8个字符 */
#include <stdio.h>
int main(void)
{
    char ch;
    int i = 0;      // 用于计数

    while ((ch = getchar()) != '#')
    {
        i++;
        if (i != 1)
            printf(",");
        printf("%c:%d", ch,ch);
        if (i % 8 == 0)
            printf("\n");
        if (ch == '\n')
            printf("\n");
    }
    return 0;
}
