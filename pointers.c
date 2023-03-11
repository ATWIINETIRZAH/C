#include <stdio.h>

int main()
{
    
    int number = 20;   // actual variable declaration

    //initializing the pointer, p
    int *p;

    p = &number;   // storing address of int variable number in pointer p

    printf("\nAddress of var variable is: %x ", &number);

    // address stored in pointer variable
    printf("\nAddress stored in pointer variable p is: %x", p);

    // access the value using the pointer variable
    printf("\nValue of var variable or the value stored at address p is   %d ", *p);

    
    return 0;
}