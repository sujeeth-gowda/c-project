#include <stdio.h>

void factorial() {
    int n;
    unsigned long long fact = 1;
    printf("Enter a number to calculate factorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return;
    }

    for (int i = 1; i <= n; ++i)
        fact *= i;

    printf("Factorial of %d is: %llu\n", n, fact);
}
