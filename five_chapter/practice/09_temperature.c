/* 09_temperature -- 温度转换 */
#include <stdio.h>
void Temperatures(double C);
int main(void)
{
    double C;
    int bool1;

    printf("输入摄氏度，返回摄氏度，华氏度和开氏度\n");
    printf("请输入摄氏度（非数字直接退出）：");
    bool1 = scanf("%lf", &C);
    while(bool1)
    {
        Temperatures(C);
        printf("\n\n请输入摄氏度(非数字直接退出)：");
        bool1 = scanf("%lf", &C);
    }

    return 0;

}
void Temperatures(double C)
{
    double F, K;

    const double C_F1 = 9.0 / 5.0;             // 华氏度 = 摄氏度 * 9 / 5 +32
    const double C_F2 = 32.0;
    const double C_K = 273.16;                 // 开氏度 = 摄氏度 + 273.16

    F = C * C_F1 + C_F2;
    K = C + C_K;
    printf("%1.2f摄氏度\n", C);
    printf("%1.2f华氏度\n", F);
    printf("%1.2f开氏度\n", K);
}


