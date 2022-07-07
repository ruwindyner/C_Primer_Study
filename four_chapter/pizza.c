/* pizza.c -- 再比萨饼程序中使用已定义的厂里 */
#include <stdio.h>
#define PI 3.14159
int main(void)
{
	float area, cirum, radius;

	printf("What is the radius of your pizza?\n");
	scanf("%f", &radius);
	area = PI * radius * radius;
	cirum = 2.0 * PI * radius;
	printf("Your basic pizza parameters are as follow;\n");
	printf("circumferance = %1.2f, area = %2.2f\n", cirum, area);

	return 0;
}
