#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len = 0;
    int len2 = 0;

    _printf("Length:[%d, %i]\n", 100, 100, len, len);
    printf("Length:[%d, %i]\n", 100, 100, len2, len2);
    _printf("Len:[%d]\n", 100, len);
    printf("Len:[%d]\n", 100, len2);
    return (0);
}
