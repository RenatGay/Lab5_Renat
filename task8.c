#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int list[10];

    for (int i = 0; i < 10; i++) {
        list[i] = rand() % 20;
    }

    printf("List: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", list[i]);

    }
    printf("\n");

   
    for (int i = 0; i < 10 / 2; i++) {
        int temp = list[i];
        list[i] = list[i + 10 / 2];
        list[i + 10 / 2] = temp;
    }

    printf("Modified List: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", list[i]);
    }

    return 0;
}
