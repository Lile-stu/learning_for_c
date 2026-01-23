#include<stdio.h>
#define TIMES  5

int main(void)
{
    char money = '$';
    int times;
    int times2;

    for (times = 0 ; times < TIMES ; times = times +1 )
    {
        for (times2 = 0 ; times2 <times+1 ;times2++)
        printf("%c",money);
        printf("\n");   
    }

    return 0;
}