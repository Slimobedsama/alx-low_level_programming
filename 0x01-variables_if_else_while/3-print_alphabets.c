#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints alphabet in lowercase and then in uppercase
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
	}
	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);

		c++;
	}
	putchar('\n');

	return (0);
}
