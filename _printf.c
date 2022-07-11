#include <stdio.h>
#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *const format, ...)
{
	va_list args;
	int i, count = 0;
	int (*func)(va_list);
	
	va_start(args, format);
	
	if(format)
	{
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
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
				}
			}
			else
			{
				_putchar(format[i]);
				count++;
			}
		}
	}
va_end(args);
return(count);
}
