#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that prints all possible combinations
 * Return: 0
 */

int main(void)

{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
	putchar(d);
	if (d != '9')
	{
	putcher(',');
	putcher(' ');
	}
	}
	putcher('\n');
	return (0);
}
