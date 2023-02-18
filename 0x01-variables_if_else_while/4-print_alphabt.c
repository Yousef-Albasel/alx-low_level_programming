#include <stdio.h>

/**
 * main - printing all alphabet but for q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
		putchar('\n');
	return (0);
}
