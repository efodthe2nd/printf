#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int len, len2;

	len = _printf("Let's try to print a simple sentence. \n");
	len2 = printf("Let's try to print a simple sentence. \n");
	/**ui = (unsigned int)INT_MAX + 1024;
	 * addr = (void *)0x7ffe637541f0;
	 */
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("%b\n", -98);

	
	return (0);
}
