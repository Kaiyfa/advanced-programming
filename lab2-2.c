#include <stdio.h>

/* Function declaration for recursive factorial */
int factorial_recursive(int n);

int main() {
    int number;
    int result;

    /* Get the number from the user */
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    /* Calculate the factorial using recursive function */
    result = factorial_recursive(number);

    /* Output the result */
    printf("Factorial of %d is: %d (Recursive)\n", number, result);

    return 0;
}

/* Recursive factorial function */
int factorial_recursive(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case: 0! = 1! = 1
    } else {
        return n * factorial_recursive(n - 1);  // Recursive case
    }
}
