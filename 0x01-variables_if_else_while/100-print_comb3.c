#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always (Success)
 *
 */

int main(void)
{

int d, p;
for (d = '0'; d < '9'; d++)
{
for (p = d+1; p <= '9'; p++)
{
if ( p != d)
{
putchar(d);
putchar(p);
if (d == '8' && p == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
