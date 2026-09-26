#include <stdio.h>

int main() {
    float face_confidence;
    int is_authorized; // 1 for Authorized, 0 for Unauthorized

    printf("Enter Face Recognition Confidence Percentage: ");
    scanf("%f", &face_confidence);

    printf("Enter User Type (1 for Authorized, 0 for Unauthorized): ");
    scanf("%d", &is_authorized);

    // Using nested structure, logical operators, and ternary operator
    if (face_confidence < 50.0 || is_authorized == 0) {
        printf("Access Status: Access Denied\n");
    } else {
        if (face_confidence >= 50.0 && face_confidence < 80.0) {
            printf("Access Status: Manual Verification Required\n");
        } else if (face_confidence >= 80.0) {
            // Using ternary operator for grant condition
            (is_authorized == 1) ? printf("Access Status: Access Granted\n") : printf("Access Status: Access Denied\n");
        }
    }

    return 0;
}
