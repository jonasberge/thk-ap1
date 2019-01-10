#include <stddef.h>
#include <stdio.h>

int main(void)
{
	float quelle[] = { 0.9f, 1.8f, 2.7f, 3.6f,
		4.5f, 5.4f, 6.3f, 7.2f, 8.1f, 9.f };
	const size_t size = sizeof(quelle) / sizeof(*quelle);
	float ziel[size];

	for (size_t i = 0; i < size; ++i)
		ziel[i] = quelle[i];
	for (size_t i = 0, n = size / 2; i < n; ++i) {
		size_t j = size - i - 1;
		int tmp = ziel[i];
		ziel[i] = ziel[j];
		ziel[j] = tmp;
	}

	puts("Programm Kopieren eines Arrays");
	fputs("Die Array-Elemente von quelle heißen:", stdout);
	for (size_t i = 0; i < size; ++i)
		printf(" %.1f", quelle[i]);
	fputs("\nDie Array-Elemente von ziel heißen:", stdout);
	for (size_t i = 0; i < size; ++i)
		printf(" %.1f", ziel[i]);
	putchar('\n');

	return 0;
}

