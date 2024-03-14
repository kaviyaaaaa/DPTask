#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    char operator[10];
    double num1, num2, result;

    printf("Enter operator (+, -, *, /, ^, sqrt, sin, cos, tan, log, log10): ");
    scanf("%s", operator);

    if (strcmp(operator, "sqrt") != 0 && strcmp(operator, "sin") != 0 &&
        strcmp(operator, "cos") != 0 && strcmp(operator, "tan") != 0 &&
        strcmp(operator, "log") != 0 && strcmp(operator, "log10") != 0) {
        printf("Enter two operands: ");
        scanf("%lf %lf", &num1, &num2);
    } else {
        printf("Enter operand: ");
        scanf("%lf", &num1);
    }

    if (strcmp(operator, "+") == 0) {
        result = num1 + num2;
    } else if (strcmp(operator, "-") == 0) {
        result = num1 - num2;
    } else if (strcmp(operator, "*") == 0) {
        result = num1 * num2;
    } else if (strcmp(operator, "/") == 0) {
        if (num2 != 0)
            result = num1 / num2;
        else {
            printf("Error! Division by zero.\n");
            return -1;
        }
    } else if (strcmp(operator, "^") == 0) {
        result = pow(num1, num2);
    } else if (strcmp(operator, "sqrt") == 0) {
        result = sqrt(num1);
    } else if (strcmp(operator, "sin") == 0) {
        result = sin(num1);
    } else if (strcmp(operator, "cos") == 0) {
        result = cos(num1);
    } else if (strcmp(operator, "tan") == 0) {
        result = tan(num1);
    } else if (strcmp(operator, "log") == 0) {
        result = log(num1);
    } else if (strcmp(operator, "log10") == 0) {
        result = log10(num1);
    } else {
        printf("Error! Operator not recognized.\n");
        return -1;
    }

    printf("Result: %lf\n", result);
    return 0;
}
