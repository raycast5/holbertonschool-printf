#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _putstr - prints a string.
 * @args: argument to print
 * Return: length of string
 */

int _putstr(va_list args)
{
	int i, len;
	char *str;

	if (!args)
	{
		str = "(null)";
	}
	else
	{
		str = va_arg(args, char *);
		len = _strlen(str);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
return (len);
}

/**
 * _printc - prints a char.
 * @args: argument to print
 * Return: printed char
 */

int _printc(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

