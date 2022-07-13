#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <unistd.h>

/** print_i - print integers
 * @args: arguments
 * Return: integer
 */

int print_i(va_list args)
{
	int nm = va_arg(args, int);
	int total = 0;

	_printnum(nm);
	return (total);
}
