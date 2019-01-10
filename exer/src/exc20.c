#include <stddef.h>
#include <stdio.h>
#include "arrfuncs.h"

#define BUF_SIZE ((size_t)100)

int main(void)
{
	printf("INFO: das interne Array hat eine maximale Größe "
		"von %zu Elementen.\n", BUF_SIZE);
	puts("Wählen sie eine der folgenden Operationen für Ihr Array:");
	puts("[1] Das Array mit Zahlen füllen.");
	puts("[2] Den Mittelwert des Arrays ausgeben.");
	puts("[3] Die größte Zahl des Arrays ausgeben.");
	puts("[4] Das Array in aufsteigender Reihenfolge sortieren.");
	puts("[5] Die Elemente des Arrays ausgeben.\n");

	int arr[BUF_SIZE];
	size_t n = 0;

	puts("Das Array muss zuerst befüllt werden.");
	n = arr_read(arr, BUF_SIZE);

	while (1) {
		int option;
		fputs("\nAuswahl: ", stdout);
		scanf("%i", &option);
		
		switch (option) {
		case 1: n = arr_read(arr, BUF_SIZE); break;
		case 2: printf("Mittelwert: %f\n", arr_mean(arr, n)); break;
		case 3: printf("Maximum: %i\n", arr_max(arr, n)); break;
		case 4: arr_sort(arr, n);
			puts("Dass Array wurde sortiert.");
			break;
		case 5: arr_print(arr, n); break;
		default: puts("Fehler: ungültige Auswahl."); break;
		}
	}

	return 0;
}

