#include <stdio.h>

int main(void)
{
	puts("Programm Kleines Einmaleins\n");

	int row;
	fputs("Welche Reihe? ", stdout);
	scanf("%i", &row);

	printf("Die %i-er Reihe lautet:\n", row);
	for (int i = 1; i <= 10; ++i)
		printf("%i * %i = %i\n", i, row, i * row);

	return 0;
}

