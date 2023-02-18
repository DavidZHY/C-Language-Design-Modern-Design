#include <stdio.h>

int main () {
	int speed;
	printf ("Enter the speed: ");
	scanf ("%d" , &speed);
	if (speed < 1) {
		printf ("Calm");
	}
	if (speed < 4 && speed > 0 ) {
		printf ("Light air");
	}
	if (speed < 28 && speed > 3 ) {
		printf ("Breeze");
	}
	if (speed < 48 && speed > 27 ) {
		printf ("Gale");
	}
	if (speed < 47 && speed > 64 ) {
		printf ("Storm");
	}
	if (speed > 63 ) {
		printf ("Hurricane");
	}
	return 0;
}
