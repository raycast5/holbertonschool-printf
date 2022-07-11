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
<<<<<<< HEAD
			if (format[i] == '%')
=======
			if (format[i] == '%' || format[i + 1] != '%')
>>>>>>> 9fa140adb43ffc96c77b1b8fc99ed6875cd3cd15
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
					count++;
					break;
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
