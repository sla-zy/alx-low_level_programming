#include <stdio.h>
/**
 * main - print alphabets exept two
 * Return: Always 0 (correct)
 */

int main(void)
{
        char x;

        x = 'a';

        while (x <= 'z')
	{
	        if (x != 'e' && x != 'q')
		{
		     	putchar(x);
			x++
		}
	}
	putchar('\n');
        return (0);
}
