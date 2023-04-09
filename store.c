#include <stdio.h>

int main() {
    int number_of_items;
    float itemPrice, totalPrice = 0.0;

    printf("Enter the number of items to be purchased: ");
    scanf("%d", &number_of_items);

    for (int i = 1; i <= number_of_items; i++) {
        printf("Enter the price of item %d: ", i);
        scanf("%f", &itemPrice);
        totalPrice += itemPrice;
    }

    printf("Total price: $%.1f\n", totalPrice);

    return 0;
}
