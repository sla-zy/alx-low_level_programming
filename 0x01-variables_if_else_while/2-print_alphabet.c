#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (correct)
 */
int main(void)
{
char x;
x = 'a';
while (x <= 'z')
putchar(x);
x++;
putchar('\n');
return (0);
}
