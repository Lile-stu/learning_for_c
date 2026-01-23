#include <stdio.h>

void  copy_arr(int a, int b,double target1[a][b] ,double source1[a][b]) {
    for (int i = 0;i < a;i++) {
        for (int j = 0;j < b;j++) {
            target1[i][j] = source1[i][j];
            printf("%.2lf \n", target1[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    double source[2] [2] = {{1.1, 2.2},{3.3, 4.4,} };
    double t1[2][2];

    copy_arr(2,2,t1,source);

    return 0;
}