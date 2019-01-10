#include <math.h>
#include <stdio.h>

int main(void)
{
	puts("Programm zur Floorfunktion");

	double value;
	fputs("Bitte geben Sie einen Wert ein: ", stdout);
	scanf("%lf", &value);

	double floored = floor(value);
	printf("Der Floorwert von %lf ist: %lf\n", value, floored);

	return 0;
}

