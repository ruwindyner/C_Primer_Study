/* 练习7：微笑倒三角 */
#include <stdio.h>
void  smile(void); // ANSI/ISO C函数原型

int main(void){
	smile();smile();smile();printf("\n");
	smile();smile();printf("\n");
	smile();printf("\n");
	return 0;
}
void smile(void){	// 定义一个函数用于打印Smile
	printf("Smile!");
}
