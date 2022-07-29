/* 使用A-F打印一个三角形，从F开始 */
#include <stdio.h>
int main(void)
{
    char i;
    int j;
    
    for (i = (int) 'F'; i >= (int) 'A'; i--)
    {
        for (j = 'F'; (int) j >= i; j--)
            printf("%c", j);
        printf("\n");
    }
    
    return 0;
}


