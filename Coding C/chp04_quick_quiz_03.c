#include <stdio.h>
int main() {
    int n;

    printf("Enter the number of natural numbers to print: ");
    scanf("%d", &n);

    printf("The first %d natural numbers are:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}