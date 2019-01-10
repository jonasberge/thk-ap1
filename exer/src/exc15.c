#include <stdio.h>

#define NTHROWS (5)
#define NDOTS (6)

int main(void)
{
	// dot_count:   Würfelaugenzahl -> Häufigkeit (wie oft gewürfelt).
	// throw_count: Häufigkeit -> Anzahl der verschiedenen Würfelaugen,
	// 	welche jeweils mit dieser Häufigkeit gewürfelt wurden.
	int dot_count[NDOTS] = {0}, throw_count[NTHROWS + 1] = { 0 };
	const size_t nthrows = NTHROWS, ndots = NDOTS;

	// Welche Augenzahlen wurden jeweils wie häufig gewürfelt?
	for (size_t i = 0; i < nthrows; ++i) {
		int eye;
		printf("Würfel %i: ", i + 1);
		scanf("%i", &eye);
		dot_count[eye - 1]++;
	}

	// Wie oft kam jede mögliche Häufigkeit vor?
	for (size_t i = 0; i < nthrows; ++i) {
		int freq = dot_count[i];
		throw_count[freq]++;
	}

	puts("Es wurde gewürfelt:");
	fputs("Auge", stdout);
	for (size_t i = 0; i < nthrows; ++i)
		printf("\t%i", i + 1);
	fputs("\nAnzahl", stdout);
	for (size_t i = 0; i < nthrows; ++i)
		printf("\t%i", dot_count[i]);
	putchar('\n');

	if (throw_count[5] == 1)
		puts("Gewonnen! Grand");
	else if (throw_count[4] == 1)
		puts("Gewonnen! Poker");
	else if (throw_count[3] == 1 && throw_count[2] == 1)
		puts("Gewonnen! Full House");
	else	puts("Nix gewonnen!");

	return 0;
}

