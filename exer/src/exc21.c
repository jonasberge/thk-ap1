#include <stddef.h>
#include <stdio.h>
#include "strfuncs.h"

#define NAME_LEN ((size_t)10)
#define BUFSZ_NAME (NAME_LEN + 1)
#define BUFSZ_CONCAT (2 * NAME_LEN + 1 + \
	(sizeof(STR_CONCAT_CENTER) / sizeof(*STR_CONCAT_CENTER)))

int main(void)
{
	char name1[BUFSZ_NAME], name2[BUFSZ_NAME];
	
	str_read2(name1, BUFSZ_NAME, name2, BUFSZ_NAME);
	printf("name1: '%s'\nname2: '%s'\n", name1, name2);

	int equal = str_iequal(name1, name2);
	printf("are the names equal? %s\n", equal ? "yes" : "no");

	char names[BUFSZ_CONCAT];
	str_concat(name1, name2, names, BUFSZ_CONCAT);
	printf("concated names: '%s'\n", names);

	return 0;
}

