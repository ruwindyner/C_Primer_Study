// trouble.c -- 误用=会导致无限循环

#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to be summed");
    printf("(q to quit):");
    status = scanf("%ld", &num);
    while (status == 1)            
    // 错误地方在这里原本是 while (status = 1)  现在编译器能检查这个问题了
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit):");
        status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}
