#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 Success
 */

int main(void)
{	char ch;

	for (ch = 'a'; ch <='z'; ch++)
	{	putchar(ch);
		char c;
		for (c = 'A'; c <='Z'; c++)
			putchar(c);
	}

return (0);
}
