#include "main.h"
#include <unistd.h>

/**
*main- Print number from 0 t0 9
*print_numbers - print 0123456789
*Debby
*Return: void
*/

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');


int main(void)
{
	print_numbers();
	return (0);

}

