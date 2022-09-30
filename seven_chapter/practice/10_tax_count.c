#include <stdio.h>
#define RATE1 0.15          // 基础税率
#define RATE2 0.15          // 超出部分税率
#define TAX1 17850 * 0.15   // 单身到阈值的基本税金
#define TAX2 23900 * 0.15   // 户主到阈值的基本税金
#define TAX3 29750 * 0.15   // 已婚，共有到阈值的基本税金
#define TAX4 14875 * 0.15   // 已婚，离异到阈值的基本税金
int main(void)
{
    int kind;              // 类别
    int tax_p;             // 改变税率的工资点
    int wage;              // 工资
    float tax;             // 税金
    float Tax;

    while (kind != 5)
    {
        printf("请输入对应的数字选择类别或者退出\n");
        printf("1、单身：      17850美元按15%%计，超出部分按28%%计\n");
        printf("2、户主：      23900美元按15%%计，超出部分按28%%计\n");
        printf("3、已婚，共有：29750美元按15%%计，超出部分按28%%计\n");
        printf("4、已婚，离异：14875美元按15%%计，超出部分按28%%计\n");
        printf("5、退出\n");
        scanf("%d", &kind);
        switch (kind)
        {
            case 1:
                tax_p = 17850;
                Tax = TAX1;
                break;
            case 2:
                tax_p = 23900;
                Tax = TAX2;
                break;
            case 3:
                tax_p = 29750;
                Tax = TAX3;
                break;
            case 4:
                tax_p = 14875;
                Tax = TAX4;
                break;
            default:
                printf("请从1-5中选择");
                continue;
        }
        printf("你选择的是：%d, 变更点为：%d\n", kind, tax_p);
        printf("请输入你的工资：");
        scanf("%d", &wage);
        if (wage <= tax_p)
            tax = wage * 0.15;
        else
            tax = Tax + 0.28 * (wage - tax_p);
        printf("税金为：%.2f\n", tax);

        return 0;
    }
}
