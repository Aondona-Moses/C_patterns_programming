#include <stdio.h>
int main(void)
{
	int ch;
	ch = 97;

	while (ch <= 122)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
