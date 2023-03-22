#include <stdio.h>
#include <string.h>

int main() {
  char word_of_the_game[100];
  printf("Enter a word for the game: ");
  scanf("%s", word_of_the_game);
    //strlen is a function used to obtain the number of characters or the length of a word
  int len = strlen(word_of_the_game);
  int correct_guesses[len];
  for (int i = 0; i < len; i++) {
    correct_guesses[i] = 0;
  }

  int number_of_guesses = 0;
  int max_guesses = 10;
  char guess;
  int game_over = 0;

  printf("Start guessing the letters!\n");
  while (!game_over) {
    printf("Guess a letter: ");
    scanf(" %c", &guess);
    //checks the guessed character against the word 
    int correct_guess = 0;
    for (int i = 0; i < len; i++) {
      if (word_of_the_game[i] == guess && !correct_guesses[i]) {
        correct_guesses[i] = 1;
        correct_guess = 1;
      }
    }

    if (correct_guess) {
      printf("Correct guess!\n");
    } else {
      printf("Ooops! wrong guess.\n");
      number_of_guesses++;
    }
    //shows the user their progress
    printf("Current word: ");
    for (int i = 0; i < len; i++) {
      if (correct_guesses[i]) {
        printf("%c", word_of_the_game[i]);
      } else {
        printf("*__*");
      }
    }
    printf("\n");
    //tells the user the word since maximum guesses have been used up
    if (number_of_guesses == max_guesses) {
      printf("Oops! You have run out of guesses. The word is %s.\n", word_of_the_game);
      game_over = 1;
    } else if (memcmp(word_of_the game, correct_guesses, len) == 0) {
      printf("Congratulations!, you guessed the word correctly %s\n", word_of_the_game);
      game_over = 1;
    }
  }

  return 0;
}
