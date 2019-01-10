#ifndef ARR_FUNCS_H
#define ARR_FUNCS_H

#include <stddef.h>

#define ARR_TOKEN_EOF (0)

// liest Integer vom Standard-Eingabestream bis entweder eine Null
// eingegeben wird oder das Array n Elemente überschreiten würde.
// gibt die Anzahl an Zahlen zurück, die im Array gespeichert wurden.
size_t arr_read(int *arr, size_t n);

// berechnet den Mittelwert der Zahlen eines Arrays und gibt diesen zurück.
float arr_mean(int *arr, size_t n);

// gibt die größte Zahl eines Arrays zurück.
int arr_max(int *arr, size_t n);

// sotiert das Array in aufsteigender Reihenfolge.
void arr_sort(int *arr, size_t n);

// gibt das Array im Standard-Ausgabestream aus.
void arr_print(int *arr, size_t n);

#endif // ARRAY_FUNCTIONS_H

