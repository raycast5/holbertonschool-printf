#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>


int _putstr(va_list args)
{
	int i, len;
	char *str = va_arg(args, char *);
	
	len = _strlen(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
return (len);
}

int _printc(va_list args)
{
	char c = va_arg(args, int);

	return(_putchar(c));
}

