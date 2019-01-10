#include <stdio.h>
#include <time.h>

struct date {
	int year;
	int month;
	int day;
};

int main(void)
{
	puts("Berechnung Ihres biologischen Alters:");

	struct date bday;
	fputs("Bitte geben sie ihr Geburtsdatum "
		"ein (Format: dd.mm.yyyy): ", stdout);
	scanf("%2d.%2d.%4d", &bday.day, &bday.month, &bday.year);

	time_t tstamp = time(NULL);
	struct tm *tinfo = localtime(&tstamp);
	struct date today = {
		1900 + tinfo->tm_year,
		tinfo->tm_mon + 1,
		tinfo->tm_mday
	};
	
	if (bday.year > today.year || bday.year == today.year &&
			(bday.month > today.month ||
			(bday.month == today.month && bday.day > today.day))) {
		fputs("Fehler: Ungültiges Datum. Das Datum muss "
			"in der Vergangenheit liegen.\n", stderr);
		return 1;
	}

	// hatte der Nutzer bereits Geburtstag?
	int had_bday = bday.month < today.month ||
		today.month == bday.month && bday.day <= today.day;

	// das Alter des Nutzers setzt sich aus der Differenz
	// des aktuellen Jahres und seines/ihres Geburtsjahres
	// zusammen, abzüglich eines Jahres, falls der Nutzer
	// noch nicht Geburtstag hatte.
	int age = today.year - bday.year - !had_bday;
	printf("Sie sind %i Jahre alt.\n", age);
	
	return 0;
}

