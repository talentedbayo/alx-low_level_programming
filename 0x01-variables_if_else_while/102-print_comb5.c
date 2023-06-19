#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
int num1, num2;

for (num1 = 0; num1 <= 99; num1++)
{
for (num2 = num1 + 1; num2 <= 99; num2++)
{
int d1_num1 = num1 / 10;
int d2_num1 = num1 % 10;
int d1_num2 = num2 / 10;
int d2_num2 = num2 % 10;
putchar('0' + d1_num1);
putchar('0' + d2_num1);
putchar(' ');
putchar('0' + d1_num2);
putchar('0' + d2_num2);

if (!(num1 == 98 && num2 == 99))
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}

