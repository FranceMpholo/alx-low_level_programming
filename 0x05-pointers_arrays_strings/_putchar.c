#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the char c to stdio
 * @c: the char print
 * Return: On success 1 else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
