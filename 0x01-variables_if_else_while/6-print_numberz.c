/* Betty style C program to print all single digit numbers of base 10 */
#include <stdio.h>
int main() {
  /* Declare a loop counter variable */
  int i;
  /* Iterate from 0 to 9 */
  for (i = 0; i <= 9; i++) {
    /* Print the ASCII code of the digit corresponding to i */
    putchar(i + '0');
  }
  /* Print a newline character */
  putchar('\n');
  /* Return 0 to indicate successful completion */
  return 0;
}
