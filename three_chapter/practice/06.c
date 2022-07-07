/* 06.c -- 输入夸脱水计算水分子数量*/
#include <stdio.h>
int main(void)
{
	int qwater;

	printf("请输入夸脱水数：");
	scanf("%d", &qwater);
	printf("%d夸脱水大约有%e个水分子", qwater, qwater / 3.0e-23 );

	return 0;
}
