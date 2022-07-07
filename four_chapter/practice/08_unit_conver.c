/* 编程练习8 -- 消耗汽油的单位转换  */
#include <stdio.h>
#define GL 3.785    // 1加仑大约为3.785升
#define ML 1.609    // 1英里大约为1.609千米
int main(void)
{
   float miles;                     // 里程 -- 单位英里
   float gallon;                    // 消耗的汽油量 --单位加仑
   float miles_per_gallon;          // 英里/加仑 -- 每加仑行驶多少公里
   float liter_per_100kilometers;   // 升/100公里
   float hkilometers;               // 里程 -- 单位百公里
   float liter;                     // 消耗的汽油量 -- 单位百公里

   printf("请输入行驶的里程（单位：英里）：");
   scanf("%f", &miles);
   printf("\n请输入消耗的汽油量（单位：加仑）：");
   scanf("%f", &gallon);
   miles_per_gallon = miles / gallon;   // 计算英里/加仑
   hkilometers = miles * 1.609 / 100;   // 将里程的单位转换成百公里
   liter = gallon * 3.785;              // 将消耗的汽油量单位转换成升
   liter_per_100kilometers = liter / hkilometers;
   printf("\n跑了%.1f英里，使用了%.1f加仑油,1加仑油大概可以跑%.1f英里，跑100公里大概需要%.1f升油\n", 
   miles, gallon, miles_per_gallon, liter_per_100kilometers);

   return 0;
}
