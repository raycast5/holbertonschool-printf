#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _strcmp - compares two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: result
 */

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

/**
 * _strlen - counts length of strings.
 * @s: string
 * Return: result
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
	}
return (i);
}

/**
 * _putchar - prints a char
 * @c: a char
 * Return: char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

