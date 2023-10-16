#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
		int num = n;

	if (n < 0)
	{


	if ((num / 10) > 0)
		print_number(num / 10);

	}
		putchar((num % 10) + '0');
}
