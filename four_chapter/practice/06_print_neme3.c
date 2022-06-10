/* 06 -- 还是打印名和姓 */
#include <stdio.h>
#include <string.h>
int main(void)
{
    char first_name[10], last_name[10];
    int len_first_name, len_last_name;
    
    printf("Please enter your first name\n");
    scanf("%s", first_name);
    printf("Please enter your last name\n");
    scanf("%s", last_name);
    len_first_name = strlen(first_name);
    len_last_name = strlen(last_name);
    printf("%s %s\n", first_name, last_name);
    printf("%*d %*d\n",len_first_name, len_first_name,len_last_name,len_last_name);
    printf("%s %s\n", first_name, last_name);
    printf("%-*d %-*d\n",len_first_name, len_first_name,len_last_name,len_last_name);

    return 0;
}
