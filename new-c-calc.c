#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function prototypes
void add(double x, double y);
void subtract(double x, double y);
void multiply(double x, double y);
void divide(double x, double y);
void power(double x, double y);
void square_root(double x);
void logarithm(double x);

int main() {
    int choice;

    printf("Advanced Calculator\n");
    printf("---------------------\n");

    while (1) {
        printf("Enter your choice:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power operation\n");
        printf("6. Square root operation\n");
        printf("7. Logarithm operation\n");
        printf("8. Quit\n");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add(0, 0);
                break;
            case 2:
                subtract(0, 0);
                break;
            case 3:
                multiply(0, 0);
                break;
            case 4:
                divide(0, 0);
 break;
            case 5:
                power(0, 0);
                break;
            case 6:
                square_root(0);
                break;
            case 7:
                logarithm(0);
                break;
            case 8:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice. Please choose again.\n");
        }
    }

    return 0;
}

void add(double x, double y) {
    double result = x + y;
    printf("%.2f + %.2f = %.2f\n", x, y, result);
}

void subtract(double x, double y) {
    double result = x - y;
    printf("%.2f - %.2f = %.2f\n", x, y, result);
}

void multiply(double x, double y) {
    double result = x * y;
    printf("%.2f * %.2f = %.2f\n", x, y, result);
}

void divide(double x, double y) {
    if (y == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return;
    }

    double result = x / y;
    printf("%.2f / %.2f = %.2f\n", x, y, result);
}

void power(double x, double y) {
    if (y < 0) {
        printf("Error: Negative exponent is not allowed.\n");
        return;
    }

    double result = pow(x, y);
    printf("%.2f ^ %.2f = %.2f\n", x, y, result);
}

void square_root(double x) {
    if (x < 0) {
        printf("Error: Square root of negative number is not allowed.\n");
        return;
    }

    double result = sqrt(x);
    printf("sqrt(%.2f) = %.2f\n", x, result);
}

void logarithm(double x) {
    if (x <= 0) {
        printf("Error: Logarithm of non-positive number is not allowed.\n");
        return;
    }

    double result = log(x);
    printf("log(%.2f) = %.2f\n", x, result);
}
