#include  "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n:function that prints the binary representation of a number
 * Return: Always(0)
 */
void print_binary(unsigned long int n)
{
	int i;
	int rap;
	unsigned long int current_state;

	for (i = 63; i >= 0; i--)
	{
		current_state = n >> i;

		if (current_state & 1)
		{
			_putchar('1');
			rap++;
		}
		else if (rap)
			_putchar('0');
	}
	if (!rap)
		_putchar('0');
}
