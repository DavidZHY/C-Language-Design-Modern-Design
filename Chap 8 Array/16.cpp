#include <stdio.h>

int main () {
	int a [ 26 ] = { 0 };
	int b [ 26 ] = { 0 };
	char ch;
	printf ("Enter first word: ");
	ch = getchar();
	while ( ch != '\n' ) {
		a [ ch - 97 ] ++;
		ch = getchar();
	}
	printf ("Enter second word: ");
	ch = getchar();
	while ( ch != '\n' ) {
		b [ ch - 97 ] ++;
		ch = getchar();
	}
	for ( int i = 0 ; i < 26 ; i++ ) {
		if ( a [ i ] != b [ i ] ) {
			printf ("The words are not anagrams.");
			return 0;
		}
	}
	printf ("The words are anagrams.");
	return 0;
}
