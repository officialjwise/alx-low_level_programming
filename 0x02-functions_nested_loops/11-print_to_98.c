#include "main.h"
/**
* print_to_98 - Prints all natural numbers from n to 98
* @n: The starting number
*/
void print_to_98(int n) {
for (int i = n; i <= 98; i++) {
putchar(i + '0');
if (i < 98) {
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
