/* 01 -- 输入ASSCII码，查询对应字符 */
#include <stdio.h>
int main(void)
{
	int asscii_value;

	printf("ASSCII:");
	printf(" ___\b\b\b");
	scanf("%d", &asscii_value);
	printf("Number %d in ASSCII is %c\n", asscii_value, asscii_value);

	return 0;
}
