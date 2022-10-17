#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int rdm;

	for (rdm = '0'; rdm <= '9'; rdm++)
	{
		putchar(rdm);
		if (rdm == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
