#include <stdio.h>

/**
 * main - print lowercase alphabet in revese,followe by new line
 * Return: Always 0
 */
int main(void)
{
	char y;

	for (y = 'z'; y >= 'a'; y--)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
