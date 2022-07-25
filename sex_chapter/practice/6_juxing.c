/* 编写一个程序，要求打印出一个由$符号组成的8列4行的矩形 */
#include <stdio.h>
int main(void)
{
    int i, j;
    
    for (i=1; i<=4; i++)
    {
        for (j=1; j<=8; j++)
            printf("$");
        printf("\n");
    }
    
    return 0;
}
