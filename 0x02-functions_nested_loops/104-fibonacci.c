#include <stdio.h>

/**
 * print_first_98_fibonacci_numbers - Prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a newline character.
 *
 * This function uses three variables: `prev`, `curr`, and `next`. The variable `prev` stores the previous Fibonacci number, the variable `curr` stores the current Fibonacci number, and the variable `next` stores the next Fibonacci number.
 *
 * The function starts by printing the values of `prev` and `curr`. Then, it enters a loop that iterates 96 times. In each iteration of the loop, the next Fibonacci number is calculated and stored in the variable `next`. Then, the values of `prev` and `curr` are swapped. Finally, the value of `next` is printed.
 */
void print_first_98_fibonacci_numbers() {
  /* Declare variables */
  int prev = 1;  /* The previous Fibonacci number */
  int curr = 2;  /* The current Fibonacci number */
  int next;      /* The next Fibonacci number */

  /* Print the first two Fibonacci numbers */
  printf("%d, %d", prev, curr);

  /* Iterate 96 times */
  for (int i = 3; i <= 98; i++) {
    /* Calculate the next Fibonacci number */
    next = prev + curr;

    /* Print the next Fibonacci number */
    printf(", %d", next);

    /* Swap the values of prev and curr */
    prev = curr;
    curr = next;
  }

  /* Print a newline character */
  printf("\n");
}

int main() {
  /* Call the print_first_98_fibonacci_numbers() function */
  print_first_98_fibonacci_numbers();

  return 0;
}
