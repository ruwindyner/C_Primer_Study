#include <stdio.h>
int main(void)
{
    char ch;
    int count;

    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
            case '.':
            {
                putchar('!');
                count++;
                break;
            }
            case '!':
            {
                putchar('!');
                putchar('!');
                count++;
                break;
            }
            default: putchar(ch);
        }
    }
    printf("进行了%d次循环\n", count);

    return 0;
}
