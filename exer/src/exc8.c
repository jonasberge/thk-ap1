#include <stdio.h>

int main(void)
{
	puts("Programm Bereichsüberschreitung (overflow)");
	puts("Geben Sie bitte zwei Integerzahlen ein "
		"(nach jeder Zahl <RETURN> drücken):");

	int x, y;
	scanf("%i%i", &x, &y);
	printf("Die Summe von x und y ist: %i\n", x + y);

	size_t size = sizeof(x);
	int high = (1 << (8 * size - 1)) - 1;
	int low = high + 1; // overflow

	// Bei der Addition zweier Zahlen, welche ein Ergebnis
	// hervorrufen würden dass zu viel Speicherplatz benötigt
	// um im limitierten Speicherplatz einer Integer-Variable
	// (Typ int) gespeichert zu werden, fallen alle Bits weg,
	// welche über diesen "hinausragen".
	// Beispiel an einer 8-bit Zahl (char):
	//   Wert: 11111111 (8 Bits)
	//   Nach Addition von 1 wäre der neue Wert folgender:
	//     100000000 (9 Bits)
	//   Da aber nur 8 Ziffern/Bits gespeichert werden fallen
	//   alle Ziffern an der Stelle 9 oder höher weg. Daher:
	//   Neuer Wert: 00000000
	// Je nach dem ob der Datentyp signed oder unsigned ist,
	// wird die Zahl als 0 oder die kleinste negative Zahl
	// behandelt, welche darstellbar ist.
	// Im Falle unseres 8-bit Werts also:
	//   Vorher:            (11111111)_2 = (255)_10 = (2^8-1)_10
	//   Nacher (signed):   (00000000)_2 = (-256)_10 = (-2^8)_10
	//   Nacher (unsigned): (00000000)_2 = (0)_10
	// Das ganze ist auch analog auf andere integer-Datentypen
	// projezierbar, wie z.B. den Integer-Variablen dieses Programms.

	printf("Intervall eines Integers (int, %zu Byte): [%i, %i]\n",
		sizeof(x), low, high);

	return 0;
}

