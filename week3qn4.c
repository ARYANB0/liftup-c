#include <stdio.h>

void findFactorial(int num, int *result) {
    int i;
    *result = 1;
    
    for (i = 1; i <= num; i++) {
        *result *= i;
    }
}

int main() {
    int num, result;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    findFactorial(num, &result);
    
    printf("Factorial of %d = %d", num, result);
    
    return 0;
}