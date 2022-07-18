#include "main.h"

/**
 * _memset - Entry point
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 * Returnv Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int n i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
