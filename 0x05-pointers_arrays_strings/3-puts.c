#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: the string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
