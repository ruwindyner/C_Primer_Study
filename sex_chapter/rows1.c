/* rows1.c -- 使用嵌套循环 */
#include <stdio.h>
#define CHARS 10
#define ROWS 6

int main(void)
{
    int row;
    char ch;

    for (row = 0; row < ROWS; row++)
    {
        for (ch = 'A'; ch < ('A' + 10); ch++)
            printf("%c", ch);
        printf("\n");
    }

    return 0;
}
