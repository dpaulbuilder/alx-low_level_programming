#include "main.h"

/*
 * _sqrt_recursion - This function returns the natural square root of a number.
 * @n: input
 * @s: input
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	int squareroot(int n, int i);

	if (n < 0)
		return (-1);
	else
		return (squareroot(n, (n + 1) / 2));
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (squareroot(n, i - 1));
}
