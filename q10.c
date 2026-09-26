#include <stdio.h>

int main() {
    float accuracy, confidence, threshold;
    int system_mode, security_level;

    printf("Enter Model Accuracy (%%): ");
    scanf("%f", &accuracy);

    printf("Enter Model Confidence (%%): ");
    scanf("%f", &confidence);

    printf("Enter Threshold (%%): ");
    scanf("%f", &threshold);

    printf("Enter System Mode (1 for Normal, 2 for Strict): ");
    scanf("%d", &system_mode);

    printf("Enter Security Level (1 for High, 0 for Low): ");
    scanf("%d", &security_level);

    // Initial check for low accuracy or confidence
    if (accuracy < 50.0 || confidence < 50.0) {
        printf("\nDecision Result: REJECTED (Low Base Accuracy/Confidence)\n");
    } else {
        switch (system_mode) {
            case 1: // Normal Mode
                if (confidence >= threshold) {
                    printf("\nDecision Result: ACCEPTED (Normal Mode)\n");
                } else {
                    printf("\nDecision Result: REQUIRES HUMAN REVIEW\n");
                }
                break;

            case 2: // Strict Mode
                if (confidence >= threshold && accuracy >= 80.0) {
                    // Security check using ternary operator
                    (security_level == 1) 
                        ? printf("\nDecision Result: ACCEPTED WITH HIGH SECURITY CLEARANCE\n") 
                        : printf("\nDecision Result: ACCEPTED (Strict Mode Standard)\n");
                } else {
                    printf("\nDecision Result: REJECTED (Failed Strict Mode Criteria)\n");
                }
                break;

            default:
                printf("\nError: Invalid System Mode Selected.\n");
                break;
        }
    }

    return 0;
}
