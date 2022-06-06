#include <stdio.h>

int main(void)
{
	int num, ap;

	for (num = 1; num<=5; num++)
	{
		for (ap=65; ap<=69; ap++)
		{
			putchar(ap);
			putchar(32);
		}
		putchar(10);
	}
}
