#include "main.h"

/**
 * _put_recursion - a function that prints a string
 * @s: input
 * Return: Always 0 (Success)
 */
void _put_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
