#include "main.h"
/**
 * print_binary - prints the binary of a number
 * @t: the number to be printed in binary
 */
void print_binary(unsigned long int t)
{
	if (t > 1)
		print_binary(t >> 1);
	_putchar((t & 1) + '0');
}
