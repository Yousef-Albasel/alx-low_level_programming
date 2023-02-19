#include <stdio.h>

/**
 * main - Printing all number from 0 to 9
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 48; i <= 57; i++)
{
for (j = i + 1; j <= 57; j++)
{
if (i != j)
{
putchar(i);
putchar(j);
if (i < '8' || j < '9')
{
putchar(44);
putchar(32);
}
}
}
}
putchar('\n');
return (0);
i}
