#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	if (n < 0)
	{
	putchar('-');
	n *= -1;
	}

	if (n == 0)
	{
	putchar('0');
	return;
	}

	int temp = n;
	int num_digits = 0;

	while (temp != 0)

	{
	temp /= 10;
	num_digits++;
	}

	while (num_digits > 0)

	{
	int divisor = 1;
	for (int i = 1; i < num_digits; i++)
	divisor *= 10;

	int digit = n / divisor;
	putchar(digit + '0');

	n %= divisor;

	num_digits--;

	}
}

