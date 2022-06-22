// running.c -- 一个对跑者有用的程序
#include <stdio.h>
#define S_PER_M 60      // 没分钟的秒钟数
#define S_PER_H 3600    // 每小时的秒钟数
const double K_PER_M = 0.62137; // 每公里的英里数

int main(void)
{
    double distk, distm;    // 跑过的距离（公里， 英里）
    double rate;            // 速度(单位：英里/小时)
    int min, sec;           // 跑步用时（以分和秒为单位）
    int time;               // 跑步用时（以秒钟为单位）
    double mtime;           // 跑1英里花的时间（以秒为单位）
    int mmin, msec;      // 跑1英里花的时间（以分和秒为时间）

    printf("这个程序可以将你跑步的成绩转换成英制\n");
    printf("可以得到跑1英里所用的时间和你的速度\n");
    printf("速度的单位是英里/小时\n");
    printf("下面请输入你最近一次跑步的距离（单位：公里）：\n");
    scanf("%lf", &distk);
    printf("接下来请分别输入你此次跑步花了多少分多少秒\n");
    printf("请先输入分：\n");
    scanf("%d", &min);
    printf("再输入秒：\n");
    scanf("%d", &sec);

    time = S_PER_M * min + sec;     // 把时间转换成秒
    distm = distk * K_PER_M;        // 把距离转换成英里
    rate = distm / time * S_PER_H;  // 英里/秒 x 秒/小时 = 英里/小时
    mtime = (double)time /distm;    // 时间/距离 = 跑1英里所花的时间
    mmin = (int)mtime / S_PER_M;    // 求出分钟数
    msec = (int)mtime % S_PER_M;    // 求出秒钟数

    printf("你跑了%1.2f公里(%1.2f英里),用时%d分%d秒\n", distk, distm, min, sec);
    printf("也就相当于%d分%d秒跑1英里\n", mmin, msec);
    printf("你的速度是%1.2f英里/小时\n", rate);

    return 0;
}
