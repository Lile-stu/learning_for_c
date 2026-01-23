#include <stdio.h>

void  copy_arr(double target1[],double source[],int n) {
    for (int n1=0;n1<5;n1++) {
        target1[n1] = source[n1];
        printf("%.2lf\n", target1[n1]);
    }
}

void copy_ptr(double *target2, double *source,int n) {
    for (int n2 =0; n2 < 5;n2++) {
        *(target2 + n2) = *(source + n2);
        printf("%.2lf\n", target2[n2]);
    }
}

void copy_ptrs(double *target3,double *start, double *end) {
    while (start < end) {
        *target3 = *start;
        printf("%.2lf\n", *target3);
        target3++;
        start++;
    }
}

int main(void) {
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double t1[5],t2[5],t3[5];

    copy_arr(t1,source, 5);
    copy_ptr(t2,source, 5);
    copy_ptrs(t3,source, source + 5);

    return 0;
}