/* 02_num_num10.c 打印输入的数到它+10的数 */
#include <stdio.h>
const int i = 10;       // 固定值10
int main(void)
{
    int min,max;
    printf("打印一个整数到比它大十的整数（两头包含）\n");
    printf("请输入一个数\n");
    scanf("%d", &min);
    max = min + i;
    while(min <= max)
    {
        printf("%d\t",min);
        min++;
    }
    printf("\n");
    
    return 0;
}
