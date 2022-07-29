/* 使用数组装8个数，然后倒序打印 */
#include <stdio.h>
int main(void)
{
    int arr[8];
    int i;

    for (i = 0; i < 8; i++)
        scanf("%d", &arr[i]);
    for (i = 7; i >= 0; i--)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
