#include <stdio.h>
#define BASE_WAGE 1000
#define OVER_WAGE 1500
#define WAGE1 1000 * 40
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
#define TAX1 300 * RATE1
#define TAX2 TAX1 + 150 * RATE2
int main(void)
{
    int work_time;
    float gross_wage;
    float tax;

    printf("请输入一周工作多少个小时\n");
    scanf("%d", &work_time);
    if (work_time <= 40)
        gross_wage = work_time * BASE_WAGE;
    else
        gross_wage = WAGE1 + (work_time - 40) * 1500;
    if (gross_wage <= 300)
        tax = gross_wage * RATE1;
    else if (gross_wage <= 450)
        tax = TAX1 + gross_wage * RATE2;
    else
        tax = TAX2 + gross_wage * RATE3;
    printf("工资总额：%.0f\n税金：%.0f\n净收入：%.0f\n", 
        gross_wage, tax, gross_wage - tax);

    return 0;
}
