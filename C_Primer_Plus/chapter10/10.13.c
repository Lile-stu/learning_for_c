/*13.编写一个程序，提示用户输入3组数，每组数包含5个double类型的数
（假设用户都正确地响应，不会输入非数值数据）。该程序应完成下列任务。
a.把用户输入的数据储存在3×5的数组中
b.计算每组（5个）数据的平均值
c.计算所有数据的平均值
d.找出这15个数据中的最大值
e.打印结果
每个任务都要用单独的函数来完成（使用传统C处理数组的方式）。完
成任务b，要编写一个计算并返回一维数组平均值的函数，利用循环调用该
函数3次。对于处理其他任务的函数，应该把整个数组作为参数，完成任务c
和d的函数应把结果返回主调函数。*/
#include <stdio.h>

double task_b(int c ,double task_b[c]) {
    double total = 0;
    for (int i = 0; i < c; i++) {
        total += task_b[i];
    }
    double average = total/c;
    return average;
}

double task_c(int r,int c,double task_c[r][c]) {
    double all = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            all += task_c[i][j];
        }
    }
    double average = all / (3 * 5);

    return average;
}

double task_d(int r,int c,double task_d[r][c]) {
    double max = task_d[0][0];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (max < task_d[i][j]) {
                max = task_d[i][j];
            }
        }
    }
    return max;
}

int main(void) {
    double group[3][5];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%lf", &group[i][j]);
        }
    }
    printf("a:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%.2lf ", group[i][j]);
        }
        printf("\n");
    }

    printf("b:\n");
    for (int i = 0; i < 3; i++) {
        printf("average for %d = %.2lf\n",i,task_b(5,group[i]));
    }


    printf("c:%.2lf\n",task_c(3,5,group));
    printf("d:%.2lf\n",task_d(3,5,group));

    return 0;
}
