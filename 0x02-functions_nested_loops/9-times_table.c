#include <stdio.h>
void times_table(void) {
int i, j;
char separator;
separator = ',';
for (i = 0; i <= 9; i++) {
for (j = 0; j <= 9; j++) {
_putchar(i < 10 ? i + '0' : separator);
_putchar(i * j + '0');
}
_putchar('\n');
}
}
