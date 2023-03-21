#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char play_again = 'y';
    int player_choice, computer_choice, player_score = 0, computer_score = 0;
    srand(time(0)); 

    printf("Welcome to the rock-paper-scissors game!\n");

    while (play_again == 'y') {
        printf("Enter your choice (1 for rock, 2 for paper, 3 for scissors): ");
        scanf("%d", &player_choice);

          // generate random choice for computer (1 for rock, 2 for paper, 3 for scissors)
        computer_choice = rand() % 3 + 1; 

        if (player_choice == computer_choice) {
            printf("It's a tie!\n");
        } else if (player_choice == 1 && computer_choice == 3 || player_choice == 2 && computer_choice == 1 || player_choice == 3 && computer_choice == 2) {
            printf("You win!\n");
            player_score++;
        } else {
            printf("Computer wins!\n");
            computer_score++;
        }

        printf("Your score: %d\nComputer's score: %d\n", player_score, computer_score);
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &play_again);
    }

    printf("Thank you for playing! Hope you enjoyed:)\n");
    return 0;
}
