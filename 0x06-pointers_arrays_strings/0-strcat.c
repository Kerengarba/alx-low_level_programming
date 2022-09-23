#include "main.h"
#include <stdio.h>
/**
 * *_strcat - concatenates string src to dest
 *
 * @dest: is our destination string (where our src will be appended to)
 * @src: is the source string (string that will be appended)
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";

	printf("%s", dest);
	printf("%s", src);

	dest = s1;
	src = s2;
	return (0);
}
