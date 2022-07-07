#include <stdio.h>

/**
 * main - Entry point
 * This program print comma-separated digits
 * Return 0 (success)
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(44);
			putchar(32);
		}
		else
		{
			putchar(10);
		}
	}
	return (0);
}
