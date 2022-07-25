/* 使用数组存储英文字符并打印 */
#include <stdio.h>
int main(void)
{
    char letters[26];
    char letter;
    int i;

    for (letter = 'a', i=0; letter <= 'z'; letter++, i++)
        letters[i] = letter;
    for (i = 0; i < 26; i++)
        printf("%c", letters[i]);
    printf("\n");
    return 0;
}
