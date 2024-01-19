#include <stdio.h>

int main() {
    char operation;
    double num1, num2, result;

    // Input
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operation);  

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Calculation
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero\n");
                return 1;  // Exit with an error code
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1;  // Exit with an error code
    }

    // Output
    printf("Result: %.2lf\n", result);

    return 0;  // Exit without errors
}

