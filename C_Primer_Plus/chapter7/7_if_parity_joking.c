#include<stdio.h>

int main(void) {
    for (int num = 0;num<1001;num++)
        if (num%2==0)
        printf("\nif (num == %d) \n    printf(\"这个数是偶数\");",num);
        else
        printf("\nif (num == %d) \n    printf(\"这个数是奇数\");",num);
}