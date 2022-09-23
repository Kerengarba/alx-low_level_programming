#include "main.h"
#include <stdio.h>

/**
 * main - to concatenate two strings
 *
 *Return: Always 0
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;
	int n;

	n = 1;
	n = 1024;

	printf("%s\n", s1);
	printf("%s", s2);
	n = 1;
	ptr = _strncat(s1, s2, n);
	printf("%s\n", s1);
	printf("%s", s2);
	printf("%s\n", ptr);
	n = 1024;
	ptr = _strncat(s1, s2, n);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);
}
