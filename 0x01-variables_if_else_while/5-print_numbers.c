#include <stdio.h>
/**
 * main - print all single numbers of base 10 starting from 0, in new line
 * Return: Always 0 (correct)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
