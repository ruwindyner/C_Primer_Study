/* 用一个数组存储2的前8次幂  */
#include <stdio.h>
int main(void)
{
    int two_pwoer[8];
    int index;
    int x = 2;

    for (index = 0; index < 8; index++)
    {
        two_pwoer[index] = x;
        x *= 2;
    }
    index = 0;
    do
    {
        printf("[%d] ", two_pwoer[index]);
        index++;
    }
    while(index < 8);

    return 0;
}
