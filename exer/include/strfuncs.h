#ifndef STR_FUNCS_H
#define STR_FUNCS_H

#include <stddef.h>

#define STR_CONCAT_CENTER " & "

// liest zwei Zeichenketten vom Standard-Eingabestream. falls einer
// der Zeichenketten seine Buffer-Länge überschreiten sollte wird
// er so abgeschnitten, dass noch Platz für ein NULL-Zeichen ist.
void str_read2(char *str1, size_t n1, char *str2, size_t n2);

// prüft zwei Zeichenketten auf Gleichheit, wobei nicht zwischen Klein-
// und Großbuchstaben unterschieden wird. falls sie tatsächlich den
// gleichen Inhalt haben, wird ein Wert ungleich 0 zurückgegeben.
int str_iequal(const char *lhs, const char *rhs);

// fügt zwei Zeichenketten zu einer zusammen und speichert das
// Resultat in out_str. falls die Buffer-Länge überschritten werden
// sollte, wird die entstandene Zeichenkette entsprechend gekürzt,
// sodass noch Platz für ein NULL-Zeichen ist. Die resultierende
// Zeichenkette hat folgendes Format: "<lhs><STR_CONCAT_CENTER><rhs>".
void str_concat(const char *lhs, const char *rhs, char *out_str, size_t size);

#endif // STR_FUNCS_H

