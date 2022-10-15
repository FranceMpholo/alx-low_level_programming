#include <stdio.h>

/**
 * main -Function
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
		putchar('\n');
	}
	for (alph = 'A'; alph <= 'Z'; alph++)
		putchar(alph);
	return (0);
}
