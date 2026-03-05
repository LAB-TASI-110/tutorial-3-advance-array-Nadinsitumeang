#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    int grades[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    printf("%d\n", sum);

    double average = (double)sum / n;
    printf("%.2f\n", average);

    int count_above_average = 0;
    for (i = 0; i < n; i++) {
        if (grades[i] >= average) {
            count_above_average++;
        }
    }

    printf("%d\n", count_above_average);

    return 0;
}
