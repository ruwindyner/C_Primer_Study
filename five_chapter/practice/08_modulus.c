/* 08_modulus.c -- 求模运算 */
#include <stdio.h>
int main(void)
{
    int x, y, z;

    printf("这个程序用于求余数\n");
    printf("输入第一个数作为除数：");
    scanf("%d", &x);
    printf("输入第二个数作为被除数（<=0退出）：");
    scanf("%d", &y);
    while(y>0)
    {
        z = y % x;
        printf("%d %% %d = %d", y, x, z);
        printf("\n\n输入下一个被除数（<=0退出）：");
        scanf("%d", &y);
    }
    
    return 0;
}
