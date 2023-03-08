#include <stdio.h>
int main() {

  int i, n;
  //initialize the first two numbers
  int first_no = 0, second_no = 1;

  // initialize the next number(in other words; the third number)
  int next_no = first_no + second_no;

  // get the number of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // print the first two numbers
  printf("Fibonacci Series' first two terms are: %d, %d, ", first_no, second_no);

  

  for (i = 3; i <= n; ++i) {
    printf("%d, ", next_no);
    first_no = second_no;
    second_no = next_no;
    next_no = first_no + second_no;
  }

  return 0;
}
