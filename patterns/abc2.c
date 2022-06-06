#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 65; i<=69; i++)
	{
		for (j=65; j<=i; j++)
		{
			putchar(j);
			putchar(32);
		}
		putchar(10);
	}
}
