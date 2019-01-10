#include <stdio.h>

int main(void)
{
	puts("Programm Kleines Einmaleins (alle Reihen)");

	for (int i = 1; i <= 10; ++i) {
		printf("\nDie %i-te Reihe lautet:\n", i);
		for (int j = 1; j <= 10; ++j)
			printf("%i * %i = %i\n", i, j, i * j);
	}
	
	return 0;
}

