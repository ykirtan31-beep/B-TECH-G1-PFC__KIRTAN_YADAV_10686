#include <stdio.h>

// Function declarations
void bitwiseAND(int a, int b);
void bitwiseOR(int a, int b);
void bitwiseXOR(int a, int b);
void leftShift(int a, int b);
void rightShift(int a, int b);

int main() {
    int choice;
    int num1, num2;

    // Display menu
    printf("\n===== Bitwise Operation Simulation System =====\n");
    printf("1. AND (&)\n");
    printf("2. OR (|)\n");
    printf("3. XOR (^)\n");
    printf("4. Left Shift (<<)\n");
    printf("5. Right Shift (>>)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Input numbers
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Switch case for operations
    switch (choice) {
        case 1:
            bitwiseAND(num1, num2);
            break;
        case 2:
            bitwiseOR(num1, num2);
            break;
        case 3:
            bitwiseXOR(num1, num2);
            break;
        case 4:
            leftShift(num1, num2);
            break;
        case 5:
            rightShift(num1, num2);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

// Function definitions
void bitwiseAND(int a, int b) {
    printf("Result of %d & %d = %d\n", a, b, a & b);
}

void bitwiseOR(int a, int b) {
    printf("Result of %d | %d = %d\n", a, b, a | b);
}

void bitwiseXOR(int a, int b) {
    printf("Result of %d ^ %d = %d\n", a, b, a ^ b);
}

void leftShift(int a, int b) {
    printf("Result of %d << %d = %d\n", a, b, a << b);
}

void rightShift(int a, int b) {
    printf("Result of %d >> %d = %d\n", a, b, a >> b);
}
