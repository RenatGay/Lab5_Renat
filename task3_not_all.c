#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N 30
int list[N];

double formula(int list[], int n) {
    double sum = 0;
    double mean = 0;

    for (int i = 0; i < n; i++) {
        mean += list[i];
    }
    mean /= n;

    for (int i = 0; i < n; i++) {
        sum += pow(list[i] - mean, 2);
    }
    sum /= n;

    return sqrt(sum);
}

void average(){
    double all = 0.0;
    for (int i = 0; i < N; i++) {
        int a = rand() % 202 - 101;
        list[i] = a;
        printf("The list[%d] is %d\n", i, a);
        all += a;
    }
    printf("Sum of all numbers is: %.2lf\n", all);
    double average = all / N;

    printf("Result is: %.2lf\n", average);
}


int main() {
    srand(time(0));
    average();

    printf("Standard Deviation is: %lf\n", formula(list, N));

    return 0;
}
