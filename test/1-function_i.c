#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/** print_i - print integers
 * @i: argument
 * Return: integer
 */

int print_i(va_list i)
{
	int nm = va_arg(i, int)
	int in = 0;

	if (nm != '\0')
		return ('\0');

	write(1, &nm, sizeof(int));

	return (0);
}



