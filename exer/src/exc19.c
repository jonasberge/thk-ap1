#include <stdio.h>

struct rational {
	int numerator;
	int denominator;
};

unsigned int gcd(unsigned int a, unsigned int b)
{
	while (b) {
		int tmp = b;
		b = a % b;
		a = tmp;
	}

	return a;
}

int main(void)
{
	puts("Programm zum Kürzen von Brüchen");

	struct rational frac;
	fputs("Bitte geben Sie den Bruch ein (a/b): ", stdout);
	scanf("%i/%i", &frac.numerator, &frac.denominator);

	unsigned int divisor = gcd(frac.numerator, frac.denominator);
	printf("Der größte gemeinsame Teiler ist: %u\n", divisor);

	frac.numerator /= divisor;
	frac.denominator /= divisor;
	printf("Der gekürzte Bruch heißt: %i/%i\n",
		frac.numerator, frac.denominator);

	return 0;
}

