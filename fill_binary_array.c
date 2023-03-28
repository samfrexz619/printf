#include "main.h"

/**
 * fill_binary_array - prints decimal in binary
 * @binary: pointer to binary
 * @int_in: input number
 * @isneg: if input number is negative
 * @limit: size of the binary
 * Return: number of chars printed.
 */
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit)
{
	int index;

	for (index = 0; index < limit; index++)
		binary[index] = '0';
	binary[limit] = '\0';
	for (index = limit - 1; int_in > 1; index--)
	{
		if (int_in == 2)
			binary[index] = '0';
		else
			binary[index] = (int_in % 2) + '0';
		int_in /= 2;
	}
	if (int_in != 0)
		binary[index] = '1';
	if (isneg)
	{
		for (index = 0; binary[index]; index++)
			if (binary[index] == '0')
				binary[index] = '1';
			else
				binary[index] = '0';
	}
	return (binary);
}
