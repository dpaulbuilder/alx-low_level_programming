#include <stdio.h>

/**
 * main - Entry point
 * Return 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56)
			{
			putchar(44);
			putchar(32);
			}
			else
			{
			putchar(10);
			}
		}
	}
	return (0);
}
