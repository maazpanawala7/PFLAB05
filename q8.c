#include <stdio.h>

int main() {
    int user_perm;
    
    // View = 1, Train = 2, Test = 4, Deploy = 8
    printf("Enter User Permission Value (integer sum of flags): ");
    scanf("%d", &user_perm);

    printf("\n--- Allowed Operations ---\n");
    if (user_perm & 1) printf("- View Allowed\n");
    if (user_perm & 2) printf("- Train Allowed\n");
    if (user_perm & 4) printf("- Test Allowed\n");
    if (user_perm & 8) printf("- Deploy Allowed\n");

    // Checking if user has BOTH Training (2) and Deployment (8) permissions
    if ((user_perm & 2) && (user_perm & 8)) {
        printf("\nResult: User HAS both Training and Deployment permissions.\n");
    } else {
        printf("\nResult: User DOES NOT have both Training and Deployment permissions.\n");
    }

    return 0;
}
