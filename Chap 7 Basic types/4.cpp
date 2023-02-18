#include <stdio.h>

int transfer (char a);

int transfer (char a) {
	if( a == 'A' || a == 'B' || a == 'C') {
		printf ("2");
	} else if ( a == 'D' || a == 'E' || a == 'F') {
		printf ("3");
	} else if ( a == 'G' || a == 'H' || a == 'I') {
		printf ("4");
	} else if ( a == 'J' || a == 'K' || a == 'L') {
		printf ("5");
	} else if ( a == 'M' || a == 'N' || a == 'O') {
		printf ("6");
	} else if ( a == 'P' || a == 'Q' || a == 'R' || a == 'S') {
		printf ("7");
	} else if ( a == 'T' || a == 'U' || a == 'V') {
		printf ("8");
	} else if ( a == 'W' || a == 'X' || a == 'Y' || a == 'Z') {
		printf ("9");
	} 
}

int main () {
	char a , b , c , d , e , f , g;
	printf ("Enter phone number: ");
	scanf ("%c%c%c%c%c%c%c" , &a , &b , &c , &d , &e , &f , &g);
	transfer (a);
	transfer (b);
	transfer (c);
	transfer (d);
	transfer (e);
	transfer (f);
	transfer (g);
	return 0;
}
