#include <stdio.h>

int main(void)
{
	int i, n_row, space, j;

	scanf("%d", &n_row);
	for (i = 1; i <= n_row; i++)
	{
		for (space = 1; space <= (n_row-i); space++)
		{
			printf(" ");
		}
		for (j = 1; j <= (2 * i) -1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
