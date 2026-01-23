//编写一个程序读取输入，读到#字符停止，然后报告读取的空格数、换行符数和所有其他字符的数量
#include<stdio.h>
#include<ctype.h>
#define STOP '#'
#define SPACE ' '

int main(void) {
    char a;
    int blank,line,other_word = 0;

    printf("Type word and # to quit:");

    while ((a = getchar()) != STOP) {
        if (isgraph(a))
            other_word++;
        else if ( a == SPACE)
            blank++;
        else
            line++;
    }

    printf("The number of blank you entered:%d\n",blank);
    printf("The number of lines:%d\n",line);
    printf("The number of other words:%d",other_word);

    return 0;
}