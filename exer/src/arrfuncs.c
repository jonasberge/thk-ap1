#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "arrfuncs.h"

size_t arr_read(int *arr, size_t n)
{
	printf("Geben Sie Integer-Zahlen ein "
		"(%i beendet die Eingabe):\n", ARR_TOKEN_EOF);

	size_t i = 0;
	for (; i < n; ++i) {
		int input;
		scanf("%i", &input);
		if (input == ARR_TOKEN_EOF)
			break;
		arr[i] = input;
	}

	return i;
}

float arr_mean(int *arr, size_t n)
{
	if (!n) return 0.f;

	int sum = 0;
	for (size_t i = 0; i < n; ++i)
		sum += arr[i];

	return (float)sum / n;
}

int arr_max(int *arr, size_t n)
{
	if (!n) return 0;

	int max = INT_MIN;
	for (size_t i = 0; i < n; ++i)
		if (arr[i] > max)
			max = arr[i];

	return max;
}

static inline void swap_int(int *lhs, int *rhs)
{
	int tmp = *lhs;
	*lhs = *rhs;
	*rhs = tmp;
}

void arr_sort(int *arr, size_t n)
{
	for (; n; --n)
		for (size_t i = 1; i < n; ++i) {
			int *a = &arr[i - 1], *b = &arr[i];
			if (*a > *b) swap_int(a, b);
		}
}

void arr_print(int *arr, size_t n)
{
	if (!n) {
		puts("Das Array ist leer.");
		return;
	}

	puts("Die Elemente des Arrays lauten:");
	for (size_t i = 0; i < n; ++i) {
		if (i) fputs(", ", stdout);
		printf("%i", arr[i]);
	}

	putchar('\n');
}

