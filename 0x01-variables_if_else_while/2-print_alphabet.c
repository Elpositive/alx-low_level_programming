#include <stdio.h>

/**
 * main - prints alpha in lower case.
 *
 * Return: 0 if no error, non-zero if otherwise.
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
