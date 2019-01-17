#include <stdio.h>

int main(void)
{
	int a, b;
	puts("Geben sie zwei ganze Zahlen ein "
		"(nach jeder Eingabe <RETURN> druecken):");
	scanf("%i%i", &a, &b);

	int sum = a + b;
	
	// der Rest fällt bei ganzzahliger Division weg.
	// Das Ergebnis stellt dar, wie oft der Dividend
	// in den Quotient "hineinpasst".
	int mean_i = sum / 2;
	
	// "normale" Division wird dann durchgeführt,
	// sobald einer der Operanden eine Gleitkommazahl ist.
	// Dabei kann in diesem Fall entweder die Variable
	// in eine solche umgewandelt werden, wie in der
	// Aufgabenstellung beschrieben, oder einfach
	// ein Float-Literal verwendet werden.
	float mean_f = sum / 2.f;

	printf("Integer-Mittelwert: %i\n", mean_i);
	printf("Float-Mittelwert: %.2f\n", mean_f);
	
	return 0;
}
