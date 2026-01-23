#include <stdio.h>

int main() {
    int number;

    scanf("%d",&number);

    printf("\n%d %p",number,&number);

    return 0;
}