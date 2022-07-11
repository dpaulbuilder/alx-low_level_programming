#include <main.h>

/**
 * print_numbers - a functions that print the numbers, from 0 to 9
 *
 * Return: 0-9 followed by newline
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_pitchar(i + '0');
	_putchar('\n');
}
