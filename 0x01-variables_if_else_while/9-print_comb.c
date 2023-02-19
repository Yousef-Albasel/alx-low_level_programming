#include <stdio.h>

/**
 * main - Printing all number from 0 to 9
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 48; i <= 57; i++)
{
putchar(i);
if (i != 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
