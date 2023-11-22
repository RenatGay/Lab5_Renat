#include <stdio.h>
    

enum Numbers {n1, n2, n3, n4 = 3, n5 = n4, n6, n7, n8 = 25, n9, n10 };

void nums(){
    int numbersList[10] = { n1, n2, n3, n4, n5, n6, n7, n8, n9, n10 };

    printf("The list with values: \n");
    for (int i = 0; i < 10; i++) {
        printf("%d \n", numbersList[i]);
    }
}

int main() {
    nums();

    return 0;
}
