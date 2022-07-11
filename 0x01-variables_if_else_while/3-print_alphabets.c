#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * This program prints every letter of the alphabet
 * Retrun: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
		putchar(a);
	for (a = 65; a < 91; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
