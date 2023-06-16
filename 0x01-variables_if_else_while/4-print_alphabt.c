#include <stdio.h>

/**
 * main - Prints the alphabet without q,e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
        for (c ='a'; c < 'z';)
        {
            if (c != 'e' && c !='q')
            {
                putchar(c);
                c++;
            }
            else
            {
                c++;
            }
        }
        putchar('\n');
	return (0);
}


