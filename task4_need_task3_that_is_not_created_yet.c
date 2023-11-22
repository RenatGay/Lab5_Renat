#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N 30

int min_max(int list[N]){
    
    int max = list[0];
    int min = list[0];

    for (int i = 0; i < N; i++){
        if(list[i]>max){
            max = list[i];
        }
        if (list[i]<min){
            min = list[i];
        }
    }
    printf("Max value is: %d\n", max);
    printf("Min value is: %d ", min);
}


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

int main() {
    srand(time(0));

    int list[N];
    double all = 0.0;

    for (int i = 0; i < N; i++) {
        int a = rand() % 201 - 100;
        list[i] = a;
        printf("The list[%d] is %d\n", i, a);
        all += a;
    }

    printf("Sum of all numbers is: %lf\n", all);
    double average = all / N;
    printf("Average is: %lf\n", average);

    printf("Standard Deviation is: %lf\n", formula(list, N));

    min_max(list);

    return 0;
}


