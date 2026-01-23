//1.设计一个程序，统计在读到文件结尾之前读取的字符数。
#include<stdio.h>
#define STOP '&'

int main(void) {
    char ch;
    int num_ch = 0;
    while ((ch = getchar()) != EOF)
        num_ch++;
    printf("%d",num_ch);

    return 0;
}
