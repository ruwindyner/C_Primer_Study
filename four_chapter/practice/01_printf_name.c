/* 01 -- 以"名,姓"格式打印输入名和姓 */
#include <stdio.h>
int main(void)
{
	char first_name[10];
	char last_name[5];

    printf("Please enter your fitst name\n");
    scanf("%s", first_name);
    printf("Pleasr enter your last name\n");
    scanf("%s", last_name);
    printf("%s,%s\n", first_name, last_name);

    return 0;
}
