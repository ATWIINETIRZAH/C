#include <stdio.h>

int main() {
    int order;
    printf("Welcome to our restaurant!\n");
    printf("What would you like to order?\n");
    printf("1. Katogo\n");
    printf("2. Chapati\n");
    printf("3. Nakati\n");
    printf("4. Kalo\n");
    printf("Please enter your order (1-4): ");
    scanf("%d", &order);

    if (order == 1) {
        printf("You ordered Katogo. That will be Ushs.10,000.\n");
    } else if (order == 2) {
        printf("You ordered a Chapati. That will be Ushs.5000.\n");
    } else if (orde == 3) {
        printf("You ordered Nakati. That will be Ushs.4500.\n");
    } else if (order == 4) {
        printf("You ordered Kalo. That will be Ushs.8500.\n");
    } else {
        printf("Invalid choice. Please enter a number between 1 and 4.\n");
    }

    return 0;
}
