#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates strings and uses up more bytes
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: Always 0.
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";

	n = 1;
	dest = s1;
	src = s2;

	printf("%s", dest);
	printf("%s%d", src, n);
	return (0);
}
