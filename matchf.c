#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

int (*matchf(const char sp))(va_list args)
{
	int i;
	fs fmt[] = {
	{'c', _printc},
	{'s', _putstr},
	{'\0', NULL}
	};

	for (i = 0; i < 3; i++)
	{
		if (sp == fmt[i].spec)
		{
			return(fmt[i].f);
		}
	}
return (NULL);
}


