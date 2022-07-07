/* 练习七：测试double和float */
#include <stdio.h>
#include <float.h>
int main(void)
{
    double x = 1.0/3.0;
    float y = 1.0/3.0;

    printf("以6位小数显示：\n");
    printf("x=%.6f\n", x);
    printf("y=%.6f\n", y);
    printf("以12位小数显示：\n");
    printf("x=%.12f\n",x);
    printf("y=%.12f\n",y);
    printf("FLT_DIG=%d\n",FLT_DIG);
    printf("DBL_DIG=%d\n",DBL_DIG);

    return 0;
    

}
