#include "main.h"

/**
 * _puts_recursion - a function that prints a string
 *
 * Return: Alwayss 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_put_recursion(s +1);
	}
}
