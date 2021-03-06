#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * matchf - matches specifiers with functions
 * @sp: format specifiers
 * Return: appropriate function, NULL if no match
 */


int (*matchf(const char sp))(va_list args)
{
	int i;
	fs fmt[] = {
	{'c', _printc},
	{'s', _putstr},
	{'%', _printpc},
	{'i', _printnum},
	{'d', _printnum},
	{'\0', NULL}
	};

	for (i = 0; i < 6; i++)
	{
		if (sp == fmt[i].spec)
		{
			return (fmt[i].f);
		}
	}
return (NULL);
}


