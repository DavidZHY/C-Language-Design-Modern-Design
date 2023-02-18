#include <stdio.h>
#include <ctype.h>

int main () {
	char ch;
	int count = 0;
	printf ("Enter a sentence: ");
	do {
		ch = getchar();
		ch = toupper (ch);
		if ( ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ) {
			count++;
		}
	} while ( ch != '\n' );
	printf ("Your sentence contains %d vowels." , count );
	return 0;
}
