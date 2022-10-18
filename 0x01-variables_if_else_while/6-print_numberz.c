#include <stdio.h>

/**
 * main - prints single digits in base ten.
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
