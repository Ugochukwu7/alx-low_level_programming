#include "main.h"
/**
 * get_bit - gets the value of a  bit at a given index
 * @t: the bit
 * @index: the index to get the value at - indices starts at 0
 * Return: if an error occors = 1
 * otherwise the value of bit at index
 */
int get_bit(unsigned long int t, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((t & (1 << index)) == 0)
		return (0);

	return (1);
}