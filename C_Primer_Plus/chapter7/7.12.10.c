#include<stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");

    float salary,duty;
    int sort;

    printf("请选择税收类别，1-单身，2-户主，3-已婚：(q to quit)");

    while ((scanf("%d",&sort)) != 0)
        if (sort == 1) {
            printf("\n请输入工资：\n");
            scanf("%f",&salary);

            duty = (salary < 17850)? 0.15*salary: 0.15*17850 + 0.28*(salary - 17850);

            printf("\n税收类型：单身，应缴纳金额%f",duty);

            continue;
        }else if (sort == 2) {
            printf("\n请输入工资：");
            scanf("%f",&salary);

            duty = (salary < 23900)? 0.15*salary: 0.15*23900 + 0.28*(salary - 23900);

            printf("\n税收类型：户主，应缴纳金额%f",duty);
            continue;
        }else if (sort == 3) {
            int married;

            printf("\n请选择已婚纳税类型，1-共有，2-离异：");
            scanf("%d",&married);

            printf("\n请输入工资：");
            scanf("%f",&salary);

            if (married == 1) {
                duty = (salary < 29750)? 0.15*salary: 0.15*29750 + 0.28*(salary - 29750);
                printf("\n税收类型：已婚，共有，应缴纳金额%f",duty);
            }else if (married == 2) {
                duty = (salary < 14875)? 0.15*salary: 0.15*14875 + 0.28*(salary - 14875);
                printf("\n税收类型：已婚，离异，应缴纳金额%f",duty);
            }
            continue;}
    return 0;
}