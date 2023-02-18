#include <stdio.h>

int main () {
	char fir , rubbish , sec;
	printf ("Enter first name and last name: ");
	fir = getchar();
	rubbish = getchar();
	while (rubbish != ' ') {
		rubbish = getchar ();
	}
	sec = getchar ();
	while (sec != '\n') {
		putchar (sec);
		sec = getchar ();
	}
	printf (", %c." , fir);
	return 0;
}
