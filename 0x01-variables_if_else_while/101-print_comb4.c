#include <stdio.h>

/**
 * main - The success combination
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j, k;
for (i = 48; i <= 57; i++)
{
for (j = i + 1; j <= 57; j++)
{
for (k = j + 1; k <= 57; ++k)
{
if (i != j && j != k)
{
putchar(i);
putchar(j);
putchar(k);
if (i < '7' || j < '8' || k < '9')
{
putchar(44);
putchar(32);
}
}
}
}
}
putchar('\n');
return (0);
}
