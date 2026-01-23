#include<stdio.h>
#define TIMES  6

int main(void)
{
    char ch  ;
    int times;

    for (times = 0 ; times < TIMES ; times++)
    {
        for ( ch = ('A'+times) ; ch <= ('A'+ 2*times );ch++)
        {
        printf("%c",ch);
        }
        printf("\n");   
    }

    return 0;
}