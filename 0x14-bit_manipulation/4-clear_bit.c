#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int hd;

	if (index > 64)
		return (-1);
	hd = index;
	for (i = 1; hd > 0; i *= 2, hd--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
