#include <stdio.h>

int main()
{
	int arr[] = {
		1, 2, 3, 4, 5, 6, 7, 8, 9, 10
	};

	int in;
	printf("Zahl: ");
	scanf("%i", &in);

	int nless = 0;
	int size = sizeof(arr) / sizeof(*arr);
	for (int i = 0; i < size; ++i) {
		nless += arr[i] < in;
	}

	printf("%i Werte sind kleiner als ihre Eingabe!\n", nless);
}

