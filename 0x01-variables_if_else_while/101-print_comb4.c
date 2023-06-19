#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */

int main(void)
{
    int d1, d2, d3;

    for (d1 = 0; d1 <= 7; d1++)
    {
        for (d2 = d1 + 1; d2 <= 8; d2++)
        {
            for (d3 = d2 + 1; d3 <= 9; d3++)
            {
                putchar('0' + d1);
                putchar('0' + d2);
                putchar('0' + d3);

                if (d1 != 7 || d2 != 8 || d3 != 9)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');

    return (0);
}

