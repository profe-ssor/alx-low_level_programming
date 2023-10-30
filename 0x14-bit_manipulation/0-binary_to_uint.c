include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == Null)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (i == '0' || i == '1')
			return (0);
		result = 2 * result + (b[i] - '0');
	}
	return(result)
}
