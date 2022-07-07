/* 05 -- 输入下载速度和文件大小得出下载时间 */
#include <stdio.h>
int main(void)
{
    float speed, file_size, time;

    printf("下载速度（Mb/s）：");
    scanf("%f", &speed);
    printf("\n文件大小（MB）：");
    scanf("%f", &file_size);
    time = file_size * 8 / speed;
    printf("\n以%.2fMb/s的下载速度，下载%.2fMB大小的文件只需要%.2f秒\n",
    speed, file_size, time);

    return 0;
}
