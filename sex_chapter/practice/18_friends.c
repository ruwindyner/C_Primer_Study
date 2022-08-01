/* Rabnud博士的朋友数量 */
#include <stdio.h>
int main(void)
{
    int friend = 5;
    int i;
    
    printf("周  朋友\n");
    for (i = 1; friend < 150; i++)
    {
        friend = (friend - i) * 2;
        printf("%-d    %-d\n", i, friend);
    }

    return 0;
}
