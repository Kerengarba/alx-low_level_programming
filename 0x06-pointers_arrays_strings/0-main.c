#include "main.h"
#include <stdio.h>

/**
 * main - to concatenate src to dest, overwritting the NULL byte
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strcat(s1, s2);
	printf("%s%s", s1, s2);
	printf("%s", ptr);
	printf("%s", s2);
return (0);
}
