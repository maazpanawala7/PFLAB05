#include <stdio.h>

int main() {
    int main_cat, sub_cat;

    printf("Select Category:\n1. Animal\n2. Vehicle\n3. Food\n4. Human\nChoice: ");
    scanf("%d", &main_cat);

    switch (main_cat) {
        case 1:
            printf("\nSelect Subcategory:\n1. Cat\n2. Dog\n3. Bird\nChoice: ");
            scanf("%d", &sub_cat);
            switch (sub_cat) {
                case 1: printf("Selected: Cat\n"); break;
                case 2: printf("Selected: Dog\n"); break;
                case 3: printf("Selected: Bird\n"); break;
                default: printf("Invalid choice!\n"); break;
            }
            break;

        case 2:
            printf("\nSelect Subcategory:\n1. Car\n2. Bus\n3. Bike\nChoice: ");
            scanf("%d", &sub_cat);
            switch (sub_cat) {
                case 1: printf("Selected: Car\n"); break;
                case 2: printf("Selected: Bus\n"); break;
                case 3: printf("Selected: Bike\n"); break;
                default: printf("Invalid choice!\n"); break;
            }
            break;

        case 3:
            printf("\nSelect Subcategory:\n1. Pizza\n2. Burger\n3. Biryani\nChoice: ");
            scanf("%d", &sub_cat);
            switch (sub_cat) {
                case 1: printf("Selected: Pizza\n"); break;
                case 2: printf("Selected: Burger\n"); break;
                case 3: printf("Selected: Biryani\n"); break;
                default: printf("Invalid choice!\n"); break;
            }
            break;

        case 4:
            printf("\nSelect Subcategory:\n1. Male\n2. Female\n3. Child\nChoice: ");
            scanf("%d", &sub_cat);
            switch (sub_cat) {
                case 1: printf("Selected: Male\n"); break;
                case 2: printf("Selected: Female\n"); break;
                case 3: printf("Selected: Child\n"); break;
                default: printf("Invalid choice!\n"); break;
            }
            break;

        default:
            printf("Invalid Category Selected.\n");
            break;
    }

    return 0;
}
