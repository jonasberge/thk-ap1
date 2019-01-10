#include <stddef.h>
#include <stdio.h>

#define NUM_GRADES (5)

int main(void)
{
	puts("Programm Notenspiegel");

	const size_t n = NUM_GRADES;
	size_t grades[NUM_GRADES];

	size_t num_exams = 0;
	int grades_acc = 0;
	for (int i = 0; i < n; ++i) {
		printf("Bitte geben Sie die Anzahl der Arbeiten "
			"mit der Note %i ein: ", i + 1);
		scanf("%i", &grades[i]);
		num_exams += grades[i];
		grades_acc += (i + 1) * grades[i];
	}

	puts("\nDer Notenspiegel sieht dann so aus:");
	
	fputs("Note", stdout);
	for (int i = 0; i < n; ++i)
		printf("\t%i", i + 1);
	puts("\tGesamt");

	fputs("Anzahl", stdout);
	for (int i = 0; i < n; ++i)
		printf("\t%i", grades[i]);
	printf("\t%i\n", num_exams);

	float avg_grade = (float)grades_acc / num_exams;
	float fail_rate = (float)grades[5 - 1] / num_exams;

	printf("\nDurchschnittsnote: %.1f\n", avg_grade);
	printf("Durchfallquote: %.1f%%\n", 100 * fail_rate);

	return 0;
}

