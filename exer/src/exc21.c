#include <stddef.h>
#include <stdio.h>
#include "strfuncs.h"

#define NAME_LEN ((size_t)10)
#define BUFSZ_NAME (NAME_LEN + 1)
#define BUFSZ_CONCAT (2 * NAME_LEN + 1 + \
	(sizeof(STR_CONCAT_CENTER) / sizeof(*STR_CONCAT_CENTER)))

int main(void)
{
	puts("Programm zur Ermittlung von Freunden.");
	printf("INFO: ein Name hat eine maximale Länge "
		"von %zu Zeichen.\n", NAME_LEN);

	char name1[BUFSZ_NAME], name2[BUFSZ_NAME];
	str_read2(name1, BUFSZ_NAME, name2, BUFSZ_NAME);

	if (str_iequal(name1, name2)) {
		printf("%s hat keine Freunde.\n", name1);
		return 0;
	}

	char names[BUFSZ_CONCAT];
	str_concat(name1, name2, names, BUFSZ_CONCAT);
	printf("%s sind Freunde\n", names);

	return 0;
}

