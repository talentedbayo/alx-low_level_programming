#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a text according to the number
 * Return: Always 0 (success)
 */
int main(void)
{
int n, lastd;

srand(time(0));
n = rand() % 201 - 100;
lastd = abs(n % 10);

printf("Last digit of %d is %d and is ", n, lastd);

if (lastd > 5)
{
printf("greater than 5\n");
}
else if (lastd == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}

return (0);
}
 
