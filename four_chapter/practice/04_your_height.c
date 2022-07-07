/* 04 -- 姓名身高 */
#include <stdio.h>
int main(void)
{
    char name[15];
    float height;

    printf("Please enter your name:\n");
    scanf("%s", name);
    printf("Please enter your height:\n");
    scanf("%f", &height);
    printf("%s, you are %.3f feet tall\n", name, height/2.54);

    return 0;

}
