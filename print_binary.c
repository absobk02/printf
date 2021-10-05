#include "main.h"

/**
 * print_binary - converts an unsigned int to binary
 * @num: int to be converted
 *
 * Return: no of resulting binary characters
 */

int print_binary(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 2);

	size = print(p_buff);

	return (size);
}
