/* min_sec.c -- 把秒数转换成分和秒 */
#include <stdio.h>
#define SEC_PER_MIN 60      // 1分钟60秒
int main(void)
{
    int sec, min, left;

    printf("将秒转换成分和秒\n");
    printf("输入秒数（<=0 直接退出）：\n");
    scanf("%d", &sec);  // 读取秒数
    while(sec > 0)
    {
        min = sec / SEC_PER_MIN;    // 截断分钟数
        left = sec % SEC_PER_MIN;   // 剩下的秒数
        printf("%d 秒 是 %d 分钟, %d 秒.\n", sec, min, left);
        printf("请输入下一个值（<=0 直接退出）：\n");
        scanf("%d", &sec);

    }
    printf("Done！\n");

    return 0;
}
