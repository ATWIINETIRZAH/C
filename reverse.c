// we include these libraries bevause we shall use certain functions stored in them
#include <stdio.h>
#include <stdlib.h>
// here we define a macro n and give it a constant value 8
#define n 8


int main(){
    int array[n] = {4,7,3,9,1,6,5,2};
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = array[i];
        array[i] = array[n-i-1];
        array[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
        printf("%d,", array[i]);
    }
}