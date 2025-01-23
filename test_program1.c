#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Asking the user for two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculating the sum of the two numbers
    sum = num1 + num2;

    // Displaying the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}

