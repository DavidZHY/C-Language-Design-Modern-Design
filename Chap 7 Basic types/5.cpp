#include <stdio.h>
#include <ctype.h>

int score (char a);

int score (char a) {
	if ( a == 'A' || a == 'E' || a == 'I' || a == 'L' || a == 'N' || a == 'S' || a == 'O' || a == 'R' || a == 'T' || a == 'U' ) {
		return 1;
	}
	if ( a == 'D' || a == 'G' ) {
		return 2;
	}
	if ( a == 'B' || a == 'C' || a == 'M' || a == 'P' ) {
		return 3;
	}
	if ( a == 'F' || a == 'H' || a == 'V' || a == 'W' || a == 'Y' ) {
		return 4;
	}
	if ( a == 'K' ) {
		return 5;
	}
	if ( a == 'J' || a == 'X' ) {
		return 8;
	}
	if ( a == 'Q' || a == 'Z' ) {
		return 10;
	}
}

int main () {
	char ch;
	int total = 0;
	printf ("Enter a word: ");
	ch = getchar();
	ch = toupper (ch);
	while ( ch != '\n' ) {
		ch = toupper (ch);
		total += score (ch);
		ch = getchar();
	}
	printf ("Scrabble value: %d" , total);
	return 0;
}
