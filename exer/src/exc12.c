#include <stdio.h>

int main(void)
{
	int nruns = 0;
	const int in = 20, jn = 20;
	for (int i = 0; i < in; ++i)
		for (int j = 0; j < jn; ++j)
			printf("."), nruns++;

	int prediction = in * jn;
	printf("\nDie äußere Schleife läuft %i mal und "
		"die innere Schleife läuft %i mal.\n", in, jn);
	printf("Demnach sollte die printf-Anweisung %i "
		"mal ausgeführt werden\n", prediction);
	printf("Test: Die printf-Anweisung wurde %i mal ausgeführt.\n", nruns);
	
	return 0;
}
