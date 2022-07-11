#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/** print_d - print integer in decimals
 * @d: argument
 * Return: decimals
 */

int print_d(va_list d)
{
	int n = va_arg(d, int)
	int ix = 0;
	int a;

	while (ix != 0)
	{
		a += n;
		n = ix;
	}
	write(1, &n, sizeof(int));
	va_end(d);
	return (ix);
}
