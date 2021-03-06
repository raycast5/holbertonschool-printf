#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _putstr - prints a string.
 * @args: argument to print
 * Return: length of string
 */

int _putstr(va_list args)
{
	int i, len;
	char *str = va_arg(args, char *);

	if (!str)
	{
		str = "(null)";
	}
	len = _strlen(str);
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

/**
 * _printpc - prints percent sign
 * @args: arguments
 * Return: 1
 */

int _printpc(__attribute__((unused)) va_list args)
{
	_putchar('%');
return (1);
}

/**
 * _printnum - print integers
 * @args: integer
 * Return: count
 */

int _printnum(va_list args)
{
	int n = va_arg(args, int), count = 0;
	int x[11], i = 0, flag;

	if (n < 0 && n != INT_MIN)
	{
		_putchar('-');
		count++;
		n = -(n);
	}
	else if (n == INT_MIN)
	{
		_putchar('-');
		count++;
		n = INT_MAX;
		flag = 1;
	}
	if (n == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	for (; n / 10 != 0; i++)
	{
		x[i] = (n % 10 + '0');
		n /= 10;
	}
	x[i] = (n % 10 + '0');
	if (flag == 1)
	{
		x[0] = '8';
	}
	for (; i >= 0; i--)
	{
		_putchar(x[i]);
		count++;
	}
return (count);
}
