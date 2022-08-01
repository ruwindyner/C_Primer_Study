/* 两个数组，一个存数字，一个存前一个里面数字对应的和  */
#include <stdio.h>
int main(void)
{
    int arr1[8], arr2[8];
    int i;
    
    printf("请输入8个值：");
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &arr1[i]);
    }
    arr2[0] = arr1[0];
    for (i = 1; i < 8; i++)
    {
        arr2[i] = arr2[i-1] + arr1[i];
    }

    for (i = 0; i < 8; i++)
    {
        printf("%5d", arr1[i]);
    }
    printf("\n");
    for (i = 0; i < 8; i++)
    {
        printf("%5d", arr2[i]);
    }
    printf("\n");

    return 0;
}
