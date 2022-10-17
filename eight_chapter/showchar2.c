/* showchar2.c -- 按指定的行列打印字符 */
#include <stdio.h>
void display(char cr, int lines, int width);
int main(void)
{
    int ch;                             /* 待打印字符 */
    int rows, cols;                     /* 行和列数 */

    printf("输入一个字母和两个整数：\n");
    while ((ch = getchar()) != '\n')
    {
        if (scanf("%d %d", &rows, &cols) != 2)
            break;
        display(ch, rows, cols);
        while (getchar() != '\n')
            continue;
        printf("输入另一个字母和两个整数\n");
        printf("输入空行退出\n");
    }
    printf("Bye.\n");

    return 0;
}

void display(char cr, int lines, int width)
{
    int cols, rows;

    for (rows = 1; rows <= lines; rows++)
    {
        for (cols =1; cols <= width; cols++)
            putchar(cr);
        putchar('\n');
    }
}
