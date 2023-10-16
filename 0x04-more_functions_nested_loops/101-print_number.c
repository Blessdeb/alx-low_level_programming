#include "main.h"
#include <stdio.h>

/*
 * File: 101-print_number.c
 *
 */


/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{

	if (n < 0)
	{
		putchar('-');

	}

	if ((n / 10) > 0)
		print_number(n / 10);

	putchar((n % 10) + '0');
}
