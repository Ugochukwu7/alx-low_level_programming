#include "main.h"
/**
 * flip_bits - number of bits
 * flipped to get from one number to another
 * @s: the number
 * @q: the number to flip s to
 * Return: the necessary number of bits to flip to get s to q.
 */
unsigned int flip_bits(unsigned long int s, unsigned long int q)
{
	unsigned long int xor = t ^ q, bits = 0;

	while (xor > 0)
	{bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}
