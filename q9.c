#include <stdio.h>
#include <math.h>

int main() {
    int calc_choice;
    double num1, num2, result;

    printf("Math Calculator Menu:\n");
    printf("1. Square Root\n2. Power\n3. Absolute Value\n4. Floor\n5. Ceiling\nChoice: ");
    scanf("%d", &calc_choice);

    switch (calc_choice) {
        case 1:
            printf("Enter number: ");
            scanf("%lf", &num1);
            if (num1 >= 0) {
                result = sqrt(num1);
                printf("Square Root: %.4f\n", result);
            } else {
                printf("Error: Invalid negative input for square root!\n");
            }
            break;

        case 2:
            printf("Enter base: ");
            scanf("%lf", &num1);
            printf("Enter exponent: ");
            scanf("%lf", &num2);
            result = pow(num1, num2);
            printf("Result: %.4f\n", result);
            break;

        case 3:
            printf("Enter number: ");
            scanf("%lf", &num1);
            result = fabs(num1);
            printf("Absolute Value: %.4f\n", result);
            break;

        case 4:
            printf("Enter number: ");
            scanf("%lf", &num1);
            result = floor(num1);
            printf("Floor Value: %.2f\n", result);
            break;

        case 5:
            printf("Enter number: ");
            scanf("%lf", &num1);
            result = ceil(num1);
            printf("Ceiling Value: %.2f\n", result);
            break;

        default:
            printf("Error: Invalid menu choice!\n");
            break;
    }

    return 0;
}
