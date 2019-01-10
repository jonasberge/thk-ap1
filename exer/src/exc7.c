#include <stdio.h>

int is_leap_year(int year)
{
	// y mod 400 = 0 ∨ (y mod 4 = 0 ∧ y mod 100 ≠ 0)
	return !(year % 400) || (!(year % 4) && year % 100);
}

int main(void)
{
	puts("Programm Schaltjahr");

	int year;
	printf("Bitte geben sie eine Jahreszahl ein: ");
	scanf("%i", &year);
	
	const char *pronoun = is_leap_year(year) ? "ein" : "kein";
	printf("Das Jahr ist %s Schaltjahr.\n", pronoun);
	return 0;
}

