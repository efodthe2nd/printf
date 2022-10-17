#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int base_converter(int x, int base)
{
	int y, b, count = 0;
	int alloc = 1;
	char *str;

	str = malloc(alloc);
	if (x == 0)
	{
		_write(0 + '0');
		return (1);
	}

	if (x < 0)
	{
		_write('-');
		x = x * -1;
		count++;
	}

	while (x > 0)
	{
		y = x % base;
		str[count] = y + '0';
		str = realloc(str, ++alloc);
		count++;
		x = (x / base);
	}
	str[count] = '\0';

	b = count;

	while (b >= 0)
	{
		_write(str[b]);
		b--;
	}

	free(str);

	return (count);
}

int _print_int_binary(va_list args)
{
	int count;

	count = base_converter(va_arg(args, int), 2);
	return (count);
}
