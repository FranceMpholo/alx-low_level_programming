#include <stdio.h>

/**
 * main - prints arguments it receives.
 * @argc: number of command line arguments.
 * @argv: arrya that contains the program command line argument
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
