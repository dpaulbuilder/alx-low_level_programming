#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: number of times table to print
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, res;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = j * i;
				if (j != 0)
				{
			_putchar(',');
			_putchar(' ');
				}
				if (res < 10 && j != 0)
				{
			_putchar(' ');
			_putchar(' ');
		_putchar((res % 10) + '0');


	return (0);
}
