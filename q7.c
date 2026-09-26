#include <stdio.h>

int main() {
    float model_confidence, required_threshold;

    printf("Enter AI Model Confidence Score (%%): ");
    scanf("%f", &model_confidence);

    printf("Enter Required Confidence Threshold (%%): ");
    scanf("%f", &required_threshold);

    // Confidence Level classification
    if (model_confidence >= 90.0) {
        printf("Confidence Level: Very High\n");
    } else if (model_confidence >= 75.0) {
        printf("Confidence Level: High\n");
    } else if (model_confidence >= 50.0) {
        printf("Confidence Level: Moderate\n");
    } else {
        printf("Confidence Level: Low\n");
    }

    // Acceptance condition using relational and logical operators
    if (model_confidence >= required_threshold && model_confidence >= 50.0) {
        printf("Prediction Status: Accepted\n");
    } else {
        printf("Prediction Status: Rejected\n");
    }

    return 0;
}
