#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 Success
 */
int main (void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("The Last digit of %d\n is", 'n');
	if (n > 5)
{	printf("n and is greater than 5\n");
	}
else if (n == 0)
	{	printf("n and is 0\n");
}
	else if ((n < 6) != 0)
	{	printf("n and is less than 6 and not 0\n");
	}
return (0);
}
