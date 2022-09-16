#include "main.h"

#include <stdio.h>



/**

 * main - check the code.

 *

 * Return: Always 0.

 */

int main(void)

{
	char c;

	for (c = 'A'; c <= 'Z'; ++c)
	printf("%c: %d\n", c, isupper(c));

	for (c = 'a'; c <= 'z'; ++c)
	printf("%c: %d\n", c, isupper(c));

return (0);
}
