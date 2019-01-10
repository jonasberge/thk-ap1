#include <stddef.h>
#include <stdio.h>

unsigned int fib(unsigned int n)
{
	unsigned int buf[] = { 0, 1 };
	const size_t size = sizeof(buf) / sizeof(*buf);
	if (n < size) return buf[n];

	unsigned int *const ptr = buf + size;
	for (unsigned int i = size - 1; i < n; ++i) {
		unsigned int next = ptr[-2] + ptr[-1];
		ptr[-2] = ptr[-1], ptr[-1] = next;
	}

	return ptr[-1];
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

