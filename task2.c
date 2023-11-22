#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 30
int list[N];

void average(){
    double all = 0.0;
    for (int i = 0; i < N; i++) {
        int a = rand() % 201 - 101;
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
    return 0;
}
