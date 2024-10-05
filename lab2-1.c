#include <stdio.h>

/* Function declaration for non-recursive factorial */
int factorial_non_recursive(int n);

int main() {
    int number;
    int result;

    /* Get the number from the user */
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    /* Calculate the factorial using non-recursive function */
    result = factorial_non_recursive(number);

    /* Output the result */
    printf("Factorial of %d is: %d (Non-Recursive)\n", number, result);

    return 0;
}

/* Non-recursive factorial function */
int factorial_non_recursive(int n) {
    int result = 1;
    
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    
    return result;
}
