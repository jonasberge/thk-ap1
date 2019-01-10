#include <stdio.h>
#include <string.h>

#define MIN_PRIME (2)
#define MAX_NUM (1000)

#define ERR_BADINPUT (1)
#define ERR_TOOLOW (2)
#define ERR_TOOHIGH (3)

int main(void)
{
	int primes[MAX_NUM + 1];
	memset(primes, 0, MIN_PRIME * sizeof(*primes));

	puts("Programm Primzahlen");
	printf("Oberes Limit (inklusive, max. %i): ", MAX_NUM);

	int count;
	if (scanf("%i", &count) != 1) {
		fputs("Fehler: ungültige Eingabe\n", stderr);
		return ERR_BADINPUT;
	}
	if (count < 2) {
		fputs("Fehler: das Limit muss größer oder "
			"gleich 2 sein\n", stderr);
		return ERR_TOOLOW;
	}
	if (count > MAX_NUM) {
		fprintf(stderr, "Fehler: das Limit darf %i "
			"nicht überschreiten\n", MAX_NUM);
		return ERR_TOOHIGH;
	}
	
	for (int i = MIN_PRIME; i <= count; ++i)
		primes[i] = 1;

	for (int i = 2, end = count / 2; i <= end; ++i)
		for (int j = i * 2; j <= count; j += i)
			primes[j] = 0;

	fputs("Primzahlen:", stdout);
	for (int i = 2; i <= count; ++i)
		if (primes[i]) {
			if (i != 2) putchar(',');
			printf(" %i",  i);
		}
	putchar('\n');

	return 0;
}

