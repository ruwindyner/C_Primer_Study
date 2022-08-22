#include <stdio.h>
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
#define TAX1 300 * RATE1
#define TAX2 TAX1 + 150 * RATE2
int main(void)
{
    float base_wage;    // 基本工资
    float wage;         // 工资(税前)
    float tax;          // 税金
    int chance;         // 选择工资
    int work_time;      // 工作时间

    while (chance != 5)
    {
        printf("输入与期望薪酬或实际薪酬相应的数字\n");
        printf("1）$8.75/hr                         2）$9.33/hr\n");
        printf("3) $10.00/hr                        4）$11.20/hr\n");
        printf("5）quit\n");
        scanf("%d", &chance);
        switch (chance)
        {
            case 1: 
                base_wage = 8.75;
                break;
            case 2:
                base_wage = 9.33;
                break;
            case 3:
                base_wage = 10.00;
                break;
            case 4:
                base_wage = 11.20;
                break;
            default:
                printf("请从1-5中选择！！！\n");
                continue;
        }
        printf("请输入你一周工作多少个小时：");
        scanf("%d", &work_time);
        if (work_time <= 40)
            wage = work_time * base_wage;       
        else
            wage = (40 * base_wage) + (work_time - 40) * 1.5 * base_wage;
        if (wage <= 300)
            tax = wage * RATE1;
        else if (wage <= 450)
            tax = TAX1 + (wage - 300)* RATE2;
        else
            tax = TAX2 + (wage - 450) * RATE3;
        printf("税前工资：%.2f\n税金：%.2f\n净收入：%.2f\n", wage, tax, wage - tax);

    }

    return 0;
}
