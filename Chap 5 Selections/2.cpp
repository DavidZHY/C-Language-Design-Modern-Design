#include <stdio.h>

int main () {
	int hr , min;
	printf ("Enter a 24-hour time: ");
	scanf ("%d:%d" , &hr , &min);
	if (hr > 12) {
		hr -= 12;
		printf ("Equivalent 12-hour time: %d:%d PM" , hr , min);
	} else {
		printf ("Equivalent 12-hour time: %d:%d AM" , hr , min);
	}
	return 0;
}
