#include "main.h"
#include <stdio.h>

void reset_to_98(int *n)
{
	*n =402;
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int *p;

	n = 402;
	p = &n;
	
	printf("n=%d\n", n);
	reset_to_98(p);
	printf("n=%d\n", 98);
	return 0;
}
