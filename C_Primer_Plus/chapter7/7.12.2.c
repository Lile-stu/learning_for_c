//编写一个程序读取输入，读到#字符停止。程序要打印每个输入的字符以及对应的ASCII码（十进制）。一行打印8个字符。建议:使用字符计数和求模运算符（%）在每8个循环周期时打印一个换行符
#include <stdio.h>
#define STOP '#'

int main(void) {
    int word;
    long num_words = 0;


    while ((word = getchar()) != STOP) {
        printf("%c-%ld  ",word,word);
        num_words++;

        if (num_words % 8 == 0)
            printf("\n");
    }
    return 0;
}