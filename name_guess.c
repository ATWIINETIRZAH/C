#include <stdio.h>
#include <string.h>

int main() {
    char computerName[] = "Tirzah"; // The name to be guessed
    char userName[50]; // The user's guessed name
    int no_of_guesses = 0; // Counter for the number of guesses
    
    printf(" Can you guess my name?\n");

    //we use the d-while loop to prompt the user to guess the name until they get it right.
    do {
        printf("Guess my name: ");
        scanf("%s", userName);
        no_of_guesses++;
        //we use the strcasecmp function to check if the user's guess is the same as the computer's name
        if (strcasecmp(userName, computerName) == 0) {
            printf("Congratulations! You guessed my name in %d guesses!\n", no_of_guesses);
        } else {
            printf("Sorry, that's not my name. Please try again.\n");
        }
    } while (strcasecmp(userName, computerName) != 0);

    return 0;
}
