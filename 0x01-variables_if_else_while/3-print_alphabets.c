#include <stdio.h>

/**
 * main - Print alphabet in lower case and upper case
 * Return: Always 0 (Success)
 */

int main(void)

{
char low;
for (low = 'a'; low <= 'z'; low++)
putchar(low);       
for (low = 'A'; low <= 'Z'; low++)
putchar(low);
putchar('\n');
return (0);
}
