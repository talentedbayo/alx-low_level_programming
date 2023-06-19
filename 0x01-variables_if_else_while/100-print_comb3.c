#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Alway 0 (Success)
 */

int main(void)
{
int d, p;

for (d = 0; d <= 8; d++)
{
for (p = d + 1; p <= 9; p++)
{
putchar('0' + d);
putchar('0' + p);

if (!(d == 8 && p == 9))
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return 0;
}
