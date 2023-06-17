#include <stdio.h>

/**
 * main - comb3.
 * Return: Always 0(Success)
 */

int main(void)
{
	int i = 48;
	int l;

	for (l = 48; l < 58; l++)
	{
		if (i < l)
		{
			putchar(i);
			putchar(l);
			if (i != 56)
			{
				putchar(44);
				putchar(32);
			}
		}
		if (l == 57 && i < 57)
		{
			i++;
			l = 48;
		}
	}
	putchar('\n');
	return (0);
}
