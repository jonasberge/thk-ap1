#include <stdio.h>

int main(void)
{
	puts("Programm zur Berechnung von Rechtecken\n");

	float a, b;
	
	fputs("Bitte geben sie die erste Seite in cm ein: ", stdout);
	scanf("%f", &a);
	
	fputs("Bitte geben sie die zweite Seite in cm ein: ", stdout);
	scanf("%f", &b);

	printf("\nSeite 1 ist %8.2f cm lang.\n", a);
	printf("Seite 2 ist %8.2f cm lang.\n", b);

	float perimeter = 2*a + 2*b;
	float area = a*b;

	printf("\nDer Umfang des Recktecks beträgt %8.2f cm.\n", perimeter);
	printf("Die Fläche des Rechtecks beträgt %8.2f cm².\n", area);

	return 0;
}
