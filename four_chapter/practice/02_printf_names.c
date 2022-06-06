/* 02 -- 相比第一个多了一些条件 */
#include<stdio.h>
#include<string.h>
int main(void)
{
    char first_name[10];
    char last_name[10];

    printf("Pleast enter your first name\n");
    scanf("%s", first_name);
    printf("Pleast enter your last name\n");
    scanf("%s", last_name);
    printf("\"%s,%s\"\n", first_name, last_name);
    printf("\"%-20s%s%s\"\n", "字段", first_name, last_name);
    printf("\"%s%s%20s\"\n", first_name, last_name,"字段");
    printf("%*s%s\n", 3 * strlen(first_name) + strlen(last_name),first_name, last_name);

    return 0;

}
