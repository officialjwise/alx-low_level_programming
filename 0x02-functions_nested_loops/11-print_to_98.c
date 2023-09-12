#include <stdio.h>
#include "main.h"
void print_to_98(int n) {
for (int i = n; i <= 98; i++) {
printf("%d%c", i, i < 98 ? ',' : '\n');
}
}
