/*6.编写一个程序，生成1000个1～10范围内的随机数。不用保存或打印
这些数字，仅打印每个数出现的次数。用 10 个不同的种子值运行，生成的
数字出现的次数是否相同？可以使用本章自定义的函数或ANSI C的rand()和
srand()函数，它们的格式相同。这是一个测试特定随机数生成器随机性的方
法。 */
#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int roll(void){
    return rand() % 10 + 1;
}

int main(void){
    srand((unsigned int)time(NULL));
    int arr[10] = {0};
    for(int i = 0;i < 1000;i++){
        int num =roll();
        arr[num - 1]++;
    }

    for(int j = 0;j < 10;j++){
        printf("%d 的随机生成数是：%d\n",j + 1,arr[j]);
    }

    return 0;
}