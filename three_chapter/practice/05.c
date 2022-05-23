/* 05.c -- 输入年龄，计算秒数 */
#include <stdio.h>
int main(void)
{
	int age;

	printf("Enter a valid age:");
	scanf("%d", &age);
	printf("%d is %e seconds\n", age, age * 3.156e7);

	return 0;
}
