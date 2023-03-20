#include <stdio.h>
//libary used to get random numbers
#include <stdlib.h>
//library that deals with time functions
#include <time.h>

int main() {
    //initialize variables
    int num, guess_the_number, no_of_attempts = 0;
    //function used to generate random number
    srand(time(0));
    //provides the range from which the random numbers will be generated.ie in this case; from 1 to 100
    num = rand() % 100 + 1;
    printf("Guess a number between 1 and 100\n");
    do {
        scanf("%d", &guess_the_number);
        no_of_attempts++;
        if (guess_the_number > num) {
            printf("try Lower\n");
        } else if (guess_the_number < num) {
            printf("try Higher\n");
        } else {
            printf("Yes! You guessed the correct number in %d attempts.\n", no_of_attempts);
        }
    } while (guess_the_number != num);
    return 0;
}