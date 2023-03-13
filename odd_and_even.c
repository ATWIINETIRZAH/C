#include<stdio.h>

int main()
{
    
    int z;
    for(z = 0; z <= 100; z++)
    {
        //if number is odd
        if(z&1) 
            printf("%d is odd\n",z);

        //if number is even
        else if(!(z&1)) 
            printf("%d is even\n",z);
    }

   
    return 0;
}