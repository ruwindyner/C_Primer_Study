/* praise2.c */
// 如果编译器不识别%zd, 尝试换成%u或%lu。
#include <stdio.h>
#include <string.h>		// 提供strlen（）函数的原型
#define PRAISE "You are an extraodinary being."
int main(void)
{
	char name[40];

	printf("What your name? ");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);
	printf("Your name of %zd letters occupies %zd memory cells.\n",
					strlen(name),sizeof name);
	printf("and occupies %zd memory cells.\n", sizeof PRAISE);
	printf("%zd", strlen(PRAISE));
	return 0;
}
