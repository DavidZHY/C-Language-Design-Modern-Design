#include <stdio.h>

int main () {
	int hr , min;
	char sect;
	printf ("Enter a 12-hour time (hh:mm AM/PM): ");
	scanf ("%d:%d %c" , &hr , &min , &sect);
	if ( sect == 'P' ) {
		hr += 12;
	}
	printf ("Equivalent 24-hour time: %d:%d" , hr , min);
	return 0;
}
