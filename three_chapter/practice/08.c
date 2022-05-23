/* 08.c -- 美国体积单位换算 */
#include <stdio.h>
int main(void)
{
	float cup;

	printf("请输入杯数：");
	scanf("%f", &cup);
	printf("%.2f杯大概为：\n", cup);
	printf("%.2f脱\n", cup / 2);
	printf("%.2f盎司\n", cup * 8);
	printf("%.2f大汤勺\n", cup * 8 * 2);
	printf("%.2f茶勺\n", cup * 8 * 2 * 3);

	return 0;
}
