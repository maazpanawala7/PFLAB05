#include <stdio.h>

int main() {
    int cat_option, sub_option;

    printf("Chatbot Categories:\n1. Greeting\n2. Study\n3. Weather\n4. Help\nChoose: ");
    scanf("%d", &cat_option);

    switch (cat_option) {
        case 1:
            printf("\n1. Hello\n2. How are you\n3. Goodbye\nChoose: ");
            scanf("%d", &sub_option);
            if (sub_option == 1) printf("Chatbot: Hello there!\n");
            else if (sub_option == 2) printf("Chatbot: I am doing well, thank you!\n");
            else if (sub_option == 3) printf("Chatbot: Goodbye, have a great day!\n");
            else printf("Invalid option.\n");
            break;

        case 2:
            printf("\n1. Programming\n2. Mathematics\n3. AI\nChoose: ");
            scanf("%d", &sub_option);
            if (sub_option == 1) printf("Chatbot: Practice C programming daily!\n");
            else if (sub_option == 2) printf("Chatbot: Linear Algebra and Calculus are key.\n");
            else if (sub_option == 3) printf("Chatbot: AI field involves ML and Deep Learning.\n");
            else printf("Invalid option.\n");
            break;

        case 3:
            printf("\n1. Today\n2. Tomorrow\n3. Forecast\nChoose: ");
            scanf("%d", &sub_option);
            if (sub_option == 1) printf("Chatbot: Today's weather is sunny.\n");
            else if (sub_option == 2) printf("Chatbot: Tomorrow might rain.\n");
            else if (sub_option == 3) printf("Chatbot: Weekly forecast looks pleasant.\n");
            else printf("Invalid option.\n");
            break;

        case 4:
            printf("\n1. About Chatbot\n2. Commands\n3. Exit\nChoose: ");
            scanf("%d", &sub_option);
            if (sub_option == 1) printf("Chatbot: I am a basic rule-based AI.\n");
            else if (sub_option == 2) printf("Chatbot: Enter numbers 1-4 to navigate.\n");
            else if (sub_option == 3) printf("Chatbot: Exiting session.\n");
            else printf("Invalid option.\n");
            break;

        default:
            printf("Invalid Category.\n");
            break;
    }

    return 0;
}
