#include <unistd.h>

/**
 * _putchar - writes the char c in std
 * @c: the char print
 * Return: On succes 1 else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
