// Scientific Calculator
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Define M_PI if not already defined
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Function to calculate factorial (iterative)
long long factorial(int n)
{
    if (n < 0)
        return -1;
    if (n > 20)
        return -2; // Overflow for long long
    if (n == 0 || n == 1)
        return 1;
    long long fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

// Function to clear input buffer
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main()
{
    int choice;
    double num1, num2, result;
    int int_num;

    while (1)
    {
        printf("\nScientific Calculator Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power (x^y)\n");
        printf("6. Square Root\n");
        printf("7. Sine (in radians)\n");
        printf("8. Cosine (in radians)\n");
        printf("9. Tangent (in radians)\n");
        printf("10. Sine (in degrees)\n");
        printf("11. Cosine (in degrees)\n");
        printf("12. Tangent (in degrees)\n");
        printf("13. Log base 10\n");
        printf("14. Natural Log (ln)\n");
        printf("15. Exponential (e^x)\n");
        printf("16. Factorial\n");
        printf("17. Modulus\n");
        printf("18. Degrees to Radians\n");
        printf("19. Radians to Degrees\n");
        printf("20. Clear Input Buffer\n");
        printf("21. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            clear_input_buffer();
            continue;
        }

        switch (choice)
        {
        case 1:
            printf("Enter two numbers: ");
            if (scanf("%lf %lf", &num1, &num2) != 2) {
                printf("Invalid input!\n");
                clear_input_buffer();
                break;
            }
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case 2:
            printf("Enter two numbers: ");
            if (scanf("%lf %lf", &num1, &num2) != 2) {
                printf("Invalid input!\n");
                clear_input_buffer();
                break;
            }
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case 3:
            printf("Enter two numbers: ");
            if (scanf("%lf %lf", &num1, &num2) != 2) {
                printf("Invalid input!\n");
                clear_input_buffer();
                break;
            }
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case 4:
            printf("Enter two numbers: ");
            if (scanf("%lf %lf", &num1, &num2) != 2) {
                printf("Invalid input!\n");
                clear_input_buffer();
                break;
            }
            if (num2 == 0)
                printf("Error: Division by zero!\n");
            else {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            }
            break;
        case 5:
            printf("Enter base and exponent: ");
            if (scanf("%lf %lf", &num1, &num2) != 2) {
                printf("Invalid input!\n");
                clear_input_buffer();
                break;
            }
            result = pow(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case 6:
            printf("Enter a number: ");
            if (scanf("%lf", &num1) != 1) {
                printf("Invalid input!\n");
                clear_input_buffer();
                break;
            }
            if (num1 < 0)
                printf("Error: Negative number!\n");
            else {
                result = sqrt(num1);
                printf("Result: %.2lf\n", result);
            }
            break;
        case 7:
            printf("Enter a number (in radians): ");
            if (scanf("%lf", &num1) != 1) {
                printf("Invalid input!\n");
                clear_input_buffer();
                break;
            }
            result = sin(num1);
            printf("Result: %.2lf\n", result);
            break;
        case 8:
            printf("Enter a number (in radians): ");
            if (scanf("%lf", &num1) != 1) {
                printf("Invalid input!\n");
                clear_input_buffer();
                break;
            }
            result = cos(num1);
            printf("Result: %.2lf\n", result);
            break;
        case 9:
            printf("Enter a number (in radians): ");
            if (scanf("%lf", &num1) != 1) {
                printf("Invalid input!\n");
                clear_input_buffer();
                break;
            }
            result = tan(num1);
            printf("Result: %.2lf\n", result);
            break;
        case 10: // Sine in degrees
            printf("Enter angle in degrees: ");
            if (scanf("%lf", &num1) != 1) {
                printf("Invalid input!\n");
                clear_input_buffer();
                break;
            }
            result = sin(num1 * M_PI / 180.0);
            printf("Result: %.2lf\n", result);
            break;
        case 11: // Cosine in degrees
            printf("Enter angle in degrees: ");
            if (scanf("%lf", &num1) != 1) {
                printf("Invalid input!\n");
                clear_input_buffer();
                break;
            }
            result = cos(num1 * M_PI / 180.0);
            printf("Result: %.2lf\n", result);
            break;
        case 12: // Tangent in degrees
            printf("Enter angle in degrees: ");
            if (scanf("%lf", &num1) != 1) {
                printf("Invalid input!\n");
                clear_input_buffer();
                break;
            }
            result = tan(num1 * M_PI / 180.0);
            printf("Result: %.2lf\n", result);
            break;
        case 13:
            printf("Enter a number: ");
            if (scanf("%lf", &num1) != 1) {
                printf("Invalid input!\n");
                clear_input_buffer();
                break;
            }
            if (num1 <= 0)
                printf("Error: Log of non-positive number!\n");
            else {
                result = log10(num1);
                printf("Result: %.2lf\n", result);
            }
            break;
        case 14:
            printf("Enter a number: ");
            if (scanf("%lf", &num1) != 1) {
                printf("Invalid input!\n");
                clear_input_buffer();
                break;
            }
            if (num1 <= 0)
                printf("Error: Ln of non-positive number!\n");
            else {
                result = log(num1);
                printf("Result: %.2lf\n", result);
            }
            break;
        case 15:
            printf("Enter a number: ");
            if (scanf("%lf", &num1) != 1) {
                printf("Invalid input!\n");
                clear_input_buffer();
                break;
            }
            result = exp(num1);
            printf("Result: %.2lf\n", result);
            break;
        case 16:
            printf("Enter a non-negative integer (<=20): ");
            if (scanf("%d", &int_num) != 1) {
                printf("Invalid input!\n");
                clear_input_buffer();
                break;
            }
            {
                long long fact = factorial(int_num);
                if (fact == -1)
                    printf("Error: Factorial of negative number!\n");
                else if (fact == -2)
                    printf("Error: Too large! Overflow.\n");
                else
                    printf("Result: %lld\n", fact);
            }
            break;
        case 17:
        {
            int a, b;
            printf("Enter two integers: ");
            if (scanf("%d %d", &a, &b) != 2) {
                printf("Invalid input!\n");
                clear_input_buffer();
                break;
            }
            if (b == 0) {
                printf("Error: Division by zero!\n");
                break;
            }
            printf("Result: %d\n", a % b);
            break;
        }
        case 18:
            printf("Enter angle in degrees: ");
            if (scanf("%lf", &num1) != 1) {
                printf("Invalid input!\n");
                clear_input_buffer();
                break;
            }
            result = num1 * M_PI / 180.0;
            printf("Result: %.6lf radians\n", result);
            break;
        case 19:
            printf("Enter angle in radians: ");
            if (scanf("%lf", &num1) != 1) {
                printf("Invalid input!\n");
                clear_input_buffer();
                break;
            }
            result = num1 * 180.0 / M_PI;
            printf("Result: %.6lf degrees\n", result);
            break;
        case 20:
            clear_input_buffer();
            printf("Input buffer cleared.\n");
            break;
        case 21:
            printf("Exiting calculator. Goodbye!\n");
            return 0;
        default:
            printf("Invalid choice! Please try again.\n");
            clear_input_buffer();
        }
    }

    return 0;
}
// Function to clear input buffer
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}  