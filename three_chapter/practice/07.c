/* 07.c -- 本来是输入英寸身高，返回厘米，但这里对英寸身高没概念所以反过来 */
#include <stdio.h>
int main(void)
{
	float height;

	printf("请输入你的身高（厘米）：");
	scanf("%f", &height);
	printf("你的身高大约为%.2f英寸\n", height / 2.54);

	return 0;
}
