#include <stdio.h>

int main()
{
	printf("Berechnung der Fläche und des Umfangs eines Rechtecks.\n");
	printf("Geben sie zwei Seitenlaengen ein (Dezimalzahlen):\n");
	
	float a, b;
	scanf("%f%f", &a, &b);

	printf("Fläche des Rechtecks: %f\n", a*b);
	printf("Umfang des Rechtecks: %f\n", 2*a + 2*b);

	return 0;
}


