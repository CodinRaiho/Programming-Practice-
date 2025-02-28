#include <stdio.h>

int main() {
    int n=10, i;
    
    printf("Multiplication table of %d:\n", n);
    for (i = 10; i >= 1; i--) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    
    return 0;
}
