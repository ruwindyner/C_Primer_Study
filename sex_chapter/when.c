/* when.c -- 何时退出循环 */
#include <stdio.h>
int main(void)
{
    int n = 5;

    while(n < 7)
    {
        printf("n=%d\n", n);
        n++;
        printf("现在n=%d\n", n);
    }
    printf("循环结束了");
   
   return 0;
}
