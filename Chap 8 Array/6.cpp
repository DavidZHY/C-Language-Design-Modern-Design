#include <stdio.h>
#include <ctype.h>

void translate ( char ch );

void translate ( char ch ) {
	switch ( ch ) {
		case 'A': {
			printf ("4");
			break;
		}
		case 'B': {
			printf ("8");
			break;
		}
		case 'E': {
			printf ("3");
			break;
		}
		case 'I': {
			printf ("1");
			break;
		}
		case 'O': {
			printf ("0");
			break;
		}
		case 'S': {
			printf ("5");
			break;
		}
		default: {
			printf ( "%c" , ch );
		}
	}
}

int main () {
	char letter;
	int i = 0;
	char ch [ 100 ] = { '\n' };
	printf ("Enter message: ");
	letter = getchar ();
	while ( letter != '\n' ) {
		letter = toupper ( letter );
		ch [ i ] = letter;
		i++;
		letter = getchar ();
	}
	printf ("In B1FF-speak: ");
	for ( int j = 0 ; j < i ; j++ ) {
		translate ( ch [ j ] );
	}
	printf ("!!!!!!!!!!");
	return 0;
}
