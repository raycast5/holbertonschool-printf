#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

int _strcmp(char *s1, char *s2)
{
	int i;
	int res = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		res = s1[i] - s2[i];
		if (res != 0)
		{
			break;
		}
	}
	return (res);
}

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
	}
return (i);
}

int _putchar(char c)
{
	return(write(1, &c, 1));
}

