#include <stdio.h>

int main() {
    int coef[4];
    printf("Enter coefficients:\n");
    for (int i = 0; i < 4; ++i) {
        printf("Coefficient a%d: ", i);
        scanf("%d", &coef[i]);
    }
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    int result = coef[0];
    for (int i = 1; i < 4; i++) {
        result = result * x + coef[i];
    }
    printf("Result is %d\n",result);
    return 0;
}
