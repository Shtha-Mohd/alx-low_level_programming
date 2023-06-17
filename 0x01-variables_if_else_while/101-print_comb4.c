#include <stdio.h>

/**
 * main - comb of three difrent digits.
 * Return: Always 0(Success)
 */

int main(void)
{
	int i = 48;
	int m = 48;
	int l;

	for (l = 48; l < 58; l++)
	{
		if (i < m  && m < l)
		{
			putchar(i);
			putchar(m);
			putchar(l);
			if (i != 55)
			{
				putchar(44);
				putchar(32);
			}
		}
		if (l == 57 && m < 57)
		{
			m++;
			l = 48;
		}
		if (m == 57 && i < 56)
		{
			i++;
			m = 48;
		}
	}
	putchar('\n');
	return (0);
}
