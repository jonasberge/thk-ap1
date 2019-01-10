#include <ctype.h>
#include <stddef.h>
#include <stdio.h>
#include "strfuncs.h"

static void str_read(char *str, size_t n)
{
	if (!n) return;

	str[n - 1] = '#';
	fgets(str, n, stdin);

	if (n == 1)
		while (str[0] != '\n' && getchar() != '\n');
	else while (!str[n - 1] && str[n - 2] != '\n' && getchar() != '\n');

	while (*str && *str != '\n') ++str;
	if (*str == '\n') *str = 0;
}

void str_read2(char *str1, size_t n1, char *str2, size_t n2)
{
	fputs("Bitte geben Sie den ersten Vornamen ein: ", stdout);
	str_read(str1, n1);

	fputs("Bitte geben Sie den zweiten Vornamen ein: ", stdout);
	str_read(str2, n2);
}

int str_iequal(const char *lhs, const char *rhs)
{
	// während beide Zeichenketten noch Zeichen haben, prüfe
	// ob die Zeichen an derselben Stelle unterschiedlich sind.
	// falls das der Fall ist, sind die beiden Zeichenketten ungleich.
	while (*lhs && *rhs)
		if (tolower(*lhs++) != tolower(*rhs++))
			return 0;
	
	// an dieser Stelle sind alle bisherigen Zeichen gleich.
	// Jetzt muss zwischen drei möglichen Fällen unterschieden werden:
	//  1. beide Zeichen haben an derselben Stelle ein NULL-Zeichen,
	//     also sind beide Zeichenketten gleich lang und identisch.
	//     Rückgabewert: !(0 ^ 0) <=> !0 <=> 1
	//  2./3. eine Zeichenkette ist bereits zuende (das NULL-Zeichen
	//        wurde gefunden), aber  die andere hat noch weiter Zeichen.
	//        In dem Fall sind die Zeichenketten nicht identisch.
	//     Rückgabewert: !(1 ^ 0) <=> !(0 ^ 1) <=> !1 <=> 0
	// Es kann nicht passieren, dass noch kein NULL-Zeichen gefunden
	// wurde, da in dem Fall die obige while-Schleife weiterlaufen würde.
	return !(*lhs ^ *rhs);
}

void str_concat(const char *lhs, const char *rhs, char *out_str, size_t size)
{
	if (!size) return;

	char *const begin = out_str;
	--size; // Platz reservieren für das NULL-Zeichen.

	const char *parts[] = { lhs, STR_CONCAT_CENTER, rhs };
	const size_t parts_size = sizeof(parts) / sizeof(*parts);

	for (size_t i = 0; i < parts_size; ++i) {
		const char *curr = parts[i];
		while (*curr) {
			if (out_str - begin >= size)
				goto lbl_loop_end;
			*out_str++ = *curr++;
		}
	}
lbl_loop_end:

	*out_str = 0; // abschließendes NULL-Zeichen.
}

