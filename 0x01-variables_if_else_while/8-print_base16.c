#include <stdio.h>

/**
 * main -Function
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int num;
	char alph;

	for (num = 48; num <= 58; num++)
		putchar(num);
	for (alph = 'a'; alph <= 'f'; alph++)
		putchar(alph);
	putchar('\n');
	return (0);
}
