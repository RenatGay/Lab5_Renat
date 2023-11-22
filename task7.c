#include <stdio.h>

int main(){
    int list[5];
    printf("Enter 5 integer values:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &list[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("list[%d]: %d \n", i, list[i]);
    }

    for (int i = 0; i < 5 / 2; i++) {
        int temp = list[i];
        list[i] = list[4 - i];
        list[4 - i] = temp;
    }
    printf("Reversed list: \n");
    for (int i = 0; i < 5; i++) {
        printf("list[%d]: %d \n", i, list[i]);
    }

    return 0;
}