#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: number's last digit result
 * Return: value of the last digit
 */
int print_last _digit(int n)
{
	int num = n % 10;

	if (n < 0)
		num = num * -1;

	_putchar(num + '0');

	return (num);
}
