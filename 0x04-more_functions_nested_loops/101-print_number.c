#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{

	if (n < 0)
	{
		n;
	}

	if ((n / 10) > 0)
		print_number(n / 10);

	putchar((n % 10) + '0');
}
