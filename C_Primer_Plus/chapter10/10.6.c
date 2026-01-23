#include <stdio.h>

void back(double *ptr);

int main() {
    double numbers[5] = {1.0, 2.0 ,3.0 ,4.0 ,5.0};

    back(numbers + 5);

    return 0;
}

void back (double *ptr) {
    for (int n = -1; n >= -5; n--) {
        printf("%.2lf ", *(ptr+n));
    }
}