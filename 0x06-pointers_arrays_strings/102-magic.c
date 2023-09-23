#include "main.h"
#include <stdio.h>

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
*p = 98;  // Added line of code
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
