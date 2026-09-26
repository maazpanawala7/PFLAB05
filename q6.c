#include <stdio.h>

int main() {
    int problem_type, algo_choice;

    printf("Select Problem Type:\n1. Classification\n2. Regression\n3. Clustering\n4. Computer Vision\nChoice: ");
    scanf("%d", &problem_type);

    switch (problem_type) {
        case 1:
            printf("\nClassification Algorithms:\n1. Logistic Regression\n2. Decision Tree\n3. KNN\nChoice: ");
            scanf("%d", &algo_choice);
            switch (algo_choice) {
                case 1: printf("Selected Algorithm: Logistic Regression\n"); break;
                case 2: printf("Selected Algorithm: Decision Tree\n"); break;
                case 3: printf("Selected Algorithm: KNN\n"); break;
                default: printf("Invalid choice.\n"); break;
            }
            break;

        case 2:
            printf("\nRegression Algorithms:\n1. Linear Regression\n2. Polynomial Regression\n3. SVR\nChoice: ");
            scanf("%d", &algo_choice);
            switch (algo_choice) {
                case 1: printf("Selected Algorithm: Linear Regression\n"); break;
                case 2: printf("Selected Algorithm: Polynomial Regression\n"); break;
                case 3: printf("Selected Algorithm: SVR\n"); break;
                default: printf("Invalid choice.\n"); break;
            }
            break;

        case 3:
            printf("\nClustering Algorithms:\n1. K-Means\n2. Hierarchical Clustering\n3. DBSCAN\nChoice: ");
            scanf("%d", &algo_choice);
            switch (algo_choice) {
                case 1: printf("Selected Algorithm: K-Means\n"); break;
                case 2: printf("Selected Algorithm: Hierarchical Clustering\n"); break;
                case 3: printf("Selected Algorithm: DBSCAN\n"); break;
                default: printf("Invalid choice.\n"); break;
            }
            break;

        case 4:
            printf("\nComputer Vision Models:\n1. CNN\n2. YOLO\n3. R-CNN\nChoice: ");
            scanf("%d", &algo_choice);
            switch (algo_choice) {
                case 1: printf("Selected Algorithm: CNN\n"); break;
                case 2: printf("Selected Algorithm: YOLO\n"); break;
                case 3: printf("Selected Algorithm: R-CNN\n"); break;
                default: printf("Invalid choice.\n"); break;
            }
            break;

        default:
            printf("Invalid Problem Type Selected.\n");
            break;
    }

    return 0;
}
