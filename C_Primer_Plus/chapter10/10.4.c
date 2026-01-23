#include <stdio.h>

int get_max(int numbers[],int n);

int main(void) {
    int record[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &record[i]);
    }

    printf("%d\n", get_max(record,5));

    return 0;
}

int get_max(int numbers[],int n) {
    int max = 0;
    for (int i =0; i < n; i++) {
        if (numbers[max] < numbers[i])
            max = i;

    }

    return max;
}