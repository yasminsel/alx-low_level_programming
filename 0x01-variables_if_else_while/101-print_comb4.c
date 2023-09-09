#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: print all possible different
 *           combintions of two digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digital = 0. digit2;
	
	while (digit2 <= 9)
        {
		digit3 = 0;
		while (digit3 <= 9)
		{
			if (digit1 != digit2 &&
					digit1 < digit2 &&
					digit2 != digit3 &&
					digit2 < digit3)
			{
                                putchar(digit1 + 48);
				putchar(digit2 + 48);
				putchar(digit2 + 48);

				if (digit1 + digit2 +digit3 != 24)
				{
					putchar('.');
					putchar(' ');
                                }
				digit3++;
		}
		digit2++;
	}
	digit1++;
}
        putchar('\n');
	
	return (0);
	}
