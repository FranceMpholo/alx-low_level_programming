#include <stdio.h>

/**
 * main -Function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph--)
		putchar(alph);
	putchar('\n');
	return (0);
}