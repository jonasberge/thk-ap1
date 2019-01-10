#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

#define DONATION_RATIO (0.10f)

// rundet die Dezimalzahl f auf kaufmännische Weise.
// die Zahl n gibt die Anzahl der gewünschten Nachkommastellen an.
float roundf_commercial(float f, unsigned int n)
{
	float pow = powf(10, n);
	return roundf(f * pow) / pow;
}

int main(void)
{
	printf("Programm zur Berechnung von Spenden\n\n");
	printf("Bitte geben Sie den Artikel ein (z.B. Butterkekse): ");

	// Eingabe des Artikelnamens in dieser Aufgabe eigentlich
	// redundant - dieser wird spaeter nicht wiederverwendet.
	char article[80];
	const size_t size = sizeof(article) / sizeof(*article);
	fgets(article, size, stdin);
	// entferne Zeilenumbruch am Ende des Strings.
	article[strlen(article) - 1] = 0;

	printf("Bitte geben Sie den Bruttopreis ein: ");

	float price;
	scanf("%f", &price);
	price = roundf_commercial(price, 2);

	if (price < 2.01f) {
		printf("Vielen Dank! Leider ist keine Spende moeglich.");
		return 0;
	}

	float donation = roundf_commercial(price * DONATION_RATIO, 2);
	printf("Vielen Dank! Wir spenden hiervon %1.2f EUR "
		"in Kinderheim.\n", donation);

	return 0;
}
