#include<stdio.h>

int main()
{
    
    int num;
    printf("Enter number:  ");
    scanf("%d",&num);

    if((num/2)*2 == num)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);

    
    return 0;
}