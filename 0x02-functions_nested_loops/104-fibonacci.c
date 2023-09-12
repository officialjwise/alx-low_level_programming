#include <stdio.h>
#include <gmp.h>

/**
* main - main block
* Description: first 98 Fibonacci numbers, starting with 1 and 2
* followed by a new line.
* Return: 0
*/
int main(void)
{
int i = 0;
mpz_t a, b, next;

// Initialize the mpz_t variables
mpz_init_set_ui(a, 0); // a = 0
mpz_init_set_ui(b, 1); // b = 1
mpz_init(next); // next = 0

while (i < 98)
{
// next = a + b
mpz_add(next, a, b);

// a = b
mpz_set(a, b);

// b = next
mpz_set(b, next);

// Print next
gmp_printf("%Zd", next);

if (i < 97)
printf(", ");
i++;
}
putchar('\n');

// Clear the mpz_t variables
mpz_clear(a);
mpz_clear(b);
mpz_clear(next);

return (0);
}
