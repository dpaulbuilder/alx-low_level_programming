#include "main.h"

/**
 * print_number - Prints any integer with putchar
 * @n: Number to prints
 *
 * Return: Notting
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('_');
		n *= -1;
	}

	x = n;

	if (x / 10)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}