#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int i;
    int j;
    int z;
    bool bol;

    printf("输入一个正整数，显示所有小于或等于该数的素数：");
    while (scanf("%d", &i) == 1)
    {
        if (i <= 0)
            printf("请输入一个正整数\n\n");
        for (j = i; j >= 2; j--)
        {
            for (z = 2, bol = false; z*z <= j ; z++)
            {
                if (j % z == 0)
                {
                    bol = true;
                    break;
                }
            }
            if (!bol)
                printf("%d", j);

        }
        printf("\n\n请输入下一个正整数：");
    }
    
    return 0;
}
