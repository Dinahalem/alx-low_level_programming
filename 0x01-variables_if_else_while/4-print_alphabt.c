#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a text according number
 * Return: Always (Success)
 *
 */

int main(void)
{
char low, q, e;
e = 'e';
q = 'q';

for (low = 'a'; low <= 'z'; low++)
{
if (low != e && low != q)
putchar(low);
}
putchar('\n');
return (0);
}
