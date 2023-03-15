#include <stdio.h>

int factorial_of_no(int number) {
    if (number == 0) {
        return 1;
    } else {
        return number * factorial_of_no(number - 1);
    }
}


int factorial_of_no(int number);

int main() {
    int number;
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Error: Invalid input. Please enter a non-negative integer.\n");
        return 0;
    }

    int answer = factorial_of_no(number);
    printf("%d! = %d\n", number, answer);

    return 0;
}

