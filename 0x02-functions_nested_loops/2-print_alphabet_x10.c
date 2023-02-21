#include "main.h"
/**
 * print_alphabet_x10 - Printing the Alphabet 10 times for some reason
 *
 * Return : always 0;
 */
void print_alphabet_x10(void)
{
	char i;
	int n = 10;

	while (n--)
	{
	for (i = 'a' ; i <= 'z' ; i++)
	_putchar(i);
	_putchar('\n');
	}
}
