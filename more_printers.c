#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _print_int_binary - Prints a int converted to binary
 * @args: A list of variadic arguments
 *
 * Return: the number of printed digites
 */

int _print_int_binary(va_list args)
{
	unsigned int x = 0;
	int b = 0, new = 0;

	new = va_arg(args, unsigned int);
	x = new;
	
	if (new < 0)
	{
		_write('1');
		new = new * -1;
		x = new;
		b += 1;
	}

	while (x > 0)
	{
		x = x / 2;
		b++;
	}
	_recursion_int_binary(new);
	return (b);
}

/**
 * _recursion_int_binary - Prints a binary
 * @a: integer to print
 *
 */
void _recursion_int_binary(int a)
{
	unsigned int t;

	t = a;
	if (t / 2)
		_recursion_int_binary(t / 2);
	_write(t % 2 + '0');
}

int print_binary(va_list args)
{
	unsigned int n, m, i, sum;
	unsigned int a[32];
	int count;

	n = va_arg(args, unsigned int);
	m = 2147483648; /* (2 ^ 31) */
	a[0] = n / m;
	for (i = 1; i < 32; i++)
	{
		m /= 2;
		a[i] = (n / m) % 2;
	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			char z = '0' + a[i];

			write(1, &z, 1);
			count++;
		}
	}
	return (count);
}
