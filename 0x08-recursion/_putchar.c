#include <unistd.h>

/**
 * _putchar - writes the c char in std
 * @c: the char print
 * Return: On success 1, else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
