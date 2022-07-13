#ifndef PRINTFH
#define PRINTFH

#include <stdarg.h>

/**
 * struct formats - struct for format matching
 * @spec: format specifiers
 * @f: function
 */


typedef struct formats
{

	char spec;
	int (*f)(va_list);
} fs;


int _strcmp(char *s1, char *s2);

int (*matchf(const char sp))(va_list args);

int _putchar(char c);

int _putstr(va_list args);

int _printc(va_list args);

int _printpc(__attribute__((unused)) va_list args);

int _strlen(char *s);

int print_i(va_list args);

void _printnum(int n);

int _printf(const char *const format, ...);
#endif
