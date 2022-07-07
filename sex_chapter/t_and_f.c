/* t_and_f -- C中的真和假 */
#include <stdio.h>
int main(void)
{
    int true_val, flase_val;

    true_val = (5 > 2);     // 关系为真的值
    flase_val = (3 == 5);   // 关系为假的值
    printf("true = %d;flase = %d\n", true_val, flase_val);

    return 0;
}
