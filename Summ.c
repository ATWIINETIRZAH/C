// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //we always indicate variables first in c.
    int number1, number2, sum;
    
    //printf prints out or ddisplays whatever is to be printed/displayed
    printf("Enter the first number: ");

    //scanf allows the user to give their input
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    sum = number1 + number2;
// the numbers entered will be integeres indicated by the %d
    printf("The sum of %d and %d is %d\n", number1, number2, sum);

    return 0;
}