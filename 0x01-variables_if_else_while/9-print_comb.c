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
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
if (i != '9')
{
putchar(',');
putchar(' ');
}
}
return (0);
}
