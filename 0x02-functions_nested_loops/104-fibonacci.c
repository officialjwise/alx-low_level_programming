/**
* main - printing first 98 fibonacci sequence
* Return: 0
*/
int main(void)
{
unsigned long int current = 1;
unsigned long int next = 2;
int i;
printf("%lu", current);
for (i = 2; i < 98; i++)
{
printf(", ");
print_large_number(0, next);
next += current;
current = next - current;
}
printf("\n");
return (0);
}
