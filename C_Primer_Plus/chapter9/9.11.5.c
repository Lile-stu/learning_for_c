//编写并测试一个函数larger_of()，该函数把两个double类型变量的值替
//换为较大的值。例如， larger_of(x, y)会把x和y中较大的值重新赋给两个变
//量。
#include <stdio.h>

void larger_of (double *,double *);

int main(void) {
    double num1,num2;

    if (scanf(" %lf %lf",&num1,&num2) == 2)
    larger_of(&num1,&num2);
    else printf("error");

    printf("\n %lf %lf",num1,num2);

    return 0;
}

void larger_of(double *p,double *q) {
    double larger = (*p > *q) ? *p:*q;
    *p = larger;
    *q = larger;
}
