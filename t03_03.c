#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int values[n]; 
    int sum = 0;
    int max_val = 0; 
    int min_val = 100; 

    for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
        sum += values[i];
        if (values[i] > max_val) {
            max_val = values[i];
        }
        if (values[i] < min_val) {
            min_val = values[i];
        }
    }

    double average = (double)sum / n;

    int count_above_avg = 0;
    for (int i = 0; i < n; i++) {
        if (values[i] >= average) {
            count_above_avg++;
        }
    }

    int range = max_val - min_val;

    printf("%d\n", sum);
    printf("%.2f\n", average);
    printf("%d\n", count_above_avg);
    printf("%d\n", range);

    return 0;
}
