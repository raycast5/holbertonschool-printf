#include <stdio.h>
#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - prints formatted to output
 * @format: format of arguments
 * Return: number of characters printed
 */

int _printf(const char *const format, ...)
{
	va_list args;
	int i, count = 0;
	int (*func)(va_list);

	va_start(args, format);

	if (format)
	{
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%' && format[i + 1] != '%')
			{
				i++;
				func = matchf(format[i]);
				if (func)
				{
					count += func(args);
				}
				else
				{
					_putchar(format[i - 1]);
					_putchar(format[i]);
					count += 2;
				}
			}
			else
			{
				_putchar(format[i]);
				count++;
			}
		}
		return (count);
	}
va_end(args);
return (-1);
}
