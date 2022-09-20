#include "main.h"
#include <stdio.h>

/**
 * main - swapping numbers
 *
 * Return: Always 0.
 */
int main (void)
{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("a=%d, ", a);
	printf("b=%d\n", b);
	swap_int(&a, &b);
	printf("a=%d, ", a);
        printf("b=%d\n", b);
	return (0);
}
