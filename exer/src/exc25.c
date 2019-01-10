#include <stdio.h>

unsigned int fib(unsigned int n)
{
	switch (n) {
	case 0: case 1: return n;
	default: return fib(n - 1) + fib(n - 2);
	}
}

int main(void)
{
	puts("Berechnung der n-ten Fibonacci-Zahl.");
	fputs("Geben sie ein n an: ", stdout);

	unsigned int n;
	scanf("%u", &n);

	unsigned int result = fib(n);
	printf("Das Ergebnis lautet: %u\n", result);

	return 0;
}

