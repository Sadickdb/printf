#include "main.h"

/**
 * fill_binary_array - fills an array with binary representation of a number
 * @binary: pointer to binary array
 * @int_in: input number
 * @isneg: flag to indicate if input number is negative
 * @limit: size of the binary array
 * Return: pointer to the binary array
 */
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit)
{
	int i;

	for (i = 0; i < limit; i++)
		binary[i] = '0';
	binary[limit] = '\0';
	for (i = limit - 1; int_in > 0 && i >= 0; i--)
	{
		binary[i] = (int_in % 2) + '0';
		int_in /= 2;
	}
	if (isneg)
	{
		for (i = 0; i < limit; i++)
		{
			if (binary[i] == '0')
				binary[i] = '1';
			else if (binary[i] == '1')
				binary[i] = '0';
		}
	}
	return (binary);
}

