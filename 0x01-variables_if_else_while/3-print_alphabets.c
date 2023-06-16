#include <stdio.h>

/**
 * main - Prints the alphabet small and caps.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
        char ch = 'A';
        for (c = 'a'; c < 'z'; c++)
        {
                putchar(c);
        }
	for (ch = 'A'; ch < 'Z'; ch++)
        {
                putchar(ch);
        }
	 putchar('\n');
	 return (0);
}
