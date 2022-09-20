#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - set integer to 98
 * @n: a pointer to the integer we want to set to 98
 *
 * Return: nothing
 */
void reset_to_98(int *n)
{	
	*n = 402;
}

/**
 * main - how to update the value of a pointer from 402 to 98
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 402;

	printf("n: %d\n", n);
	reset_to_98(&n);
	printf("n: %d\n", 98);
return 0;
}

