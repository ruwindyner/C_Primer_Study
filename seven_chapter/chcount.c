// chcount.c -- 使用罗技与运算符
#include  <stdio.h>
#define PERIOD '.'
int main(void)
{
        char ch;
        int charcount = 0;

        while ((ch = getchar()) != PERIOD)
        {
            if (ch != '"' && ch != '\'')
                charcount++;
        }
        printf("除开引号还有%d个字符\n", charcount);

        return 0;
}
