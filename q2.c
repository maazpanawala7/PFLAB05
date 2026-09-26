#include <stdio.h>

int main() {
    int user_age, credit_score, current_loan;
    float monthly_income;

    printf("Enter Age: ");
    scanf("%d", &user_age);

    printf("Enter Monthly Income: ");
    scanf("%f", &monthly_income);

    printf("Enter Credit Score: ");
    scanf("%d", &credit_score);

    printf("Do you have an existing loan? (1 for Yes, 0 for No): ");
    scanf("%d", &current_loan);

    if (user_age >= 21) {
        if (monthly_income >= 100000 && credit_score >= 750 && current_loan == 0) {
            printf("Loan Status: High Approval Chance\n");
        } else if (monthly_income >= 75000 && credit_score >= 650 && current_loan == 1) {
            printf("Loan Status: Manual Review Required\n");
        } else if (monthly_income >= 50000 && credit_score >= 600) {
            printf("Loan Status: Possibly Eligible\n");
        } else {
            printf("Loan Status: Rejected\n");
        }
    } else {
        printf("Loan Status: Rejected\n");
    }

    return 0;
}
