#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

// VAT: value-added tax (Mehrwertsteuer)
#define VAT_RATIO (0.19f)

// rundet die Dezimalzahl f auf kaufmännische Weise.
// die Zahl n gibt die Anzahl der gewünschten Nachkommastellen an.
float roundf_commercial(float f, unsigned int n)
{
	float pow = powf(10, n);
	return roundf(f * pow) / pow;
}

int main(void)
{
	puts("Programm zur Berechnung von Artikelpreisen");
	fputs("Bitte geben Sie den Artikel ein (z.B. Butterkekse): ", stdout);

	char article[80];
	const size_t size = sizeof(article) / sizeof(*article);
	fgets(article, size, stdin);
	// entferne Zeilenumbruch am Ende des Strings.
	article[strlen(article) - 1] = 0;

	printf("Bitte geben Sie den Nettopreis ein: ");

	float net;
	scanf("%f", &net);
	float tax = net * VAT_RATIO;
	
	// die von printf verwendete Rundungsart ist abhängig von der
	// Implementierung der Funktion, und greift nicht zwingend auf
	// kaufmännische Rundung zurück welche bei Geldbeträgen
	// verwendet werden sollte. daher manuelle Rundung:
	net = roundf_commercial(net, 2);
	tax = roundf_commercial(tax, 2);
	
	// Addition zweier korrekt gerundeter Zahlen ergibt ebenfalls
	// eine korrekt gerundete Zahl. daher keine weitere Rundung nötig.
	float gross = net + tax;

	printf("Der Artikel <%s> kostet netto %2.2f EUR und brutto "
		"%2.2f EUR. Die Mehrwertsteuer betraegt %2.2f EUR.\n",
		article, net, gross, tax);

	return 0;
}
