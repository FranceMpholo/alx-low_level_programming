#include <stdio.h>

/**
 * main -Funtion
 *
 * Return: Always 0 successful
 */
int main(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'q' && alph != 'e')
		{
			putchar(alph);
		}
	}
	putchar('\n');
	return (0);
}

