// wordcnt.c -- 统计字符数、单词数、行数
#include <stdio.h>
#include <ctype.h>                  // 为isspace()函数提供原型
#include <stdbool.h>                // 为bool、true、false提供定义
#define STOP '|'
int main(void)
{
    char c;                         // 读取字符
    char prev;                      // 读入的前一个字符
    long n_chars = 0L;              // 字符数
    int n_lines = 0;                // 行数
    int n_words = 0;                // 单词数
    int p_lines = 0;                 // 不完整的行数
    bool inword = false;            // 如果c是一个单词中的字符，inwaord等于true

    printf("输入需要分析的文本（输入'|' 终止）:\n");
    prev = '\n';                    // 用于识别完整的行
    while ((c = getchar()) != STOP)
    {
        n_chars++;                  // 统计字符
        if (c == '\n')
            n_lines++;              // 统计行
        if (!isspace(c) && !inword)
        {
            inword = true;          // 开始一个新的单词
            n_words++;              // 统计单词
        }
        if (isspace(c) && inword)
            inword = false;         // 打到单词的末尾
        prev = c;                   // 保存字符的值
    }
    if (prev != '\n')
        p_lines = 1;
    printf("characters = %ld, words = %d, lines = %d,", n_chars, n_words,n_lines);
    printf("partial lines = %d\n", p_lines);

    return 0;
}

