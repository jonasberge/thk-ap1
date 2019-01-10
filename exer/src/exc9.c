#include <stdio.h>
#include <string.h>

int main(void)
{
	puts("Programm Taschenrechner");
	puts("Bitte geben Sie einen Operator ein:");
	puts("+ für die Addition");
	puts("- für die Subtraktion");
	puts("* für die Multiplikation");
	puts("/ für die Division");
	puts("E für Ende");

	while (1) {
		fputs("\nOperator: ", stdout);
		char operator = getchar();
		if (operator == 'E')
			break;

		double a, b;
		fputs("Bitte geben Sie den 1. Operanden ein: ", stdout);
		scanf("%lf", &a);
		fputs("Bitte geben Sie den 2. Operanden ein: ", stdout);
		scanf("%lf", &b);

		double result;
		int is_error = 0;
		switch (operator) {
		default:
			fputs("Ungültiger Operator\n", stderr);
			is_error = 1; break;
		case '+': result = a + b; break;
		case '-': result = a - b; break;
		case '*': result = a * b; break;
		case '/':
			if (b == 0.) {
				fputs("Fehler: Division durch Null!\n", stderr);
				is_error = 1; break;
			}
			result = a / b;
			break;
		}

		if (!is_error)
			printf("Das Ergebnis lautet: %f %c %f = %f\n",
				a, operator, b, result);
		while (getchar() != '\n');		
	}

	return 0;
}
