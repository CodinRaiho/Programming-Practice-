#include <stdio.h>
void printOddNumber(int a, int n) {
    if (a > n) {
        return;
    }
    printf("%d ", a);
    printOddNumber(a + 2, n);
}

int main() {
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    
    if (n >= 1) {
        printOddNumber(1, n);
    }
    
    return 0;
}