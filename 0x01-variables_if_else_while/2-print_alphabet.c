#include <stdio.h>

/**
 * main -Function
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int alph;

	for (alph = 'a'; alph < 'z'; alph++)
		putchar(alph);
	for (alph = 'A'; alph < 'Z'; alph++)
		putchar(alph);
	printf("\n");
	return (0);
}
