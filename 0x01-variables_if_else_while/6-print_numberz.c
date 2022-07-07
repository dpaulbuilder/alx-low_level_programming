#include <stdio.h

/**
 * main - Entry point
 * This program print ever ASCII decimal digit
 * Return: 0 (success)
 */
int main(void)
{
	int a;

	for (a = 48; a <= 58; a++)
		putchar(a);
	putchar("\n");
	return (0);
}
