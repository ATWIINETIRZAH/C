//we include this library because we shall use certain functions only found in this library
#include <stdio.h>

//here we define the functions
int add_num(int a, int b) {
    return a + b;
}

int _num(int a, int b) {
    return a - b;
}

//here we declare the functions
int add_num(int a, int b);
int subtract_num(int a, int b);

int main() {
    int num1 = 45, num2 = 38;
    
    // we call the functions
    int sum = add_num(num1, num2);
    int difference = subtract_num(num1, num2);

    printf("The sum of %d and %d is %d.\n", num1, num2, sum);
    printf("The difference between %d and %d is %d.\n", num1, num2, difference);

    return 0;
}


