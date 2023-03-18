#include <stdio.h>
#include <string.h>

struct Student {
  char name[50];
  int age;
  float score;
};

int main() {
  struct Student tirzah;
  strcpy(tirzah.name, "Tirzah");
  tirzah.age = 20;
  tirzah.score = 98;

  struct Student george;
  strcpy(george.name, "George");
  george.age = 30;
  george.score = 85;

  struct Student henry;
  strcpy(henry.name, "Henry");
  henry.age = 22;
  henry.score = 83;

  struct Student students[3];
  students[0] = tirzah;
  students[1] = george;
  students[2] = henry;

  int total_age = 0;
  for (int i = 0; i < 3; i++) {
    total_age += students[i].age;
  }

  float average_age = (float) total_age / 3;

  struct Student highest_score = students[0];
  for (int i = 1; i < 3; i++) {
    if (students[i].score > highest_score.score) {
      highest_score = students[i];
    }
  }

  char output[100];
  //this function stores the message in the output variable
  sprintf(output, "%s is the smartest person with a score of %.1f out of 100 .", highest_score.name, highest_score.score);

  printf("Average age: %.1f\n", average_age);
  printf("%s\n", output);

  return 0;
}
