/* 统计输入内容中ei出现的次数 */
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    char ch;
    char count = 0;
    bool ise = false;

    while ((ch = getchar()) != '#')
    {
        if (ch == 'e')
        {
            ise = true;
            continue;
        }
        if (ise)
        {
            if (ch == 'i')
                {
                    count++;
                    ise = false;
                }
            else
                ise = false;
        }
    }
    printf("ei出现了%d次\n",count);

    return 0;
}
