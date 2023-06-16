#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main() 
{
        int i;
	/* in ASCII 48 is assigned to the char 0 */	
        for (i = 48; i < 58; i++)
        {       
                putchar(i);
        }        putchar('\n');
        return (0);
    
}
