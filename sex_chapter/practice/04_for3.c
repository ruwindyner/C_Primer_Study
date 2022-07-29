/* 还是使用字母打印三角形，不过这次不重复 */
#include <stdio.h>
int main(void)
{
    int i, j;
    char x = 'A';

    for (i = 1; i<=6; i++)
    {
        for (j = 1; j <= i; j++)
        {
           printf("%c", x);
            x++;
        }
        printf("\n");
    }
}
