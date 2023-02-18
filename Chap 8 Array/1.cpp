#include <stdio.h>

int main () {
	int num , dig;
	int digit [ 10 ] = { 0 };
	printf ("Enter a number: ");
	scanf ( "%d" , &num );
	for ( int i = 10 ; num > 0 ; num /= 10 ) {
		dig = num % i;
		digit [ dig ]++;
	}
	printf ("Repeted digit(s): ");
	for ( int i = 0 ; i < 11 ; i++ ) {
		if ( digit [ i ] > 1 ) {
			printf ( "%d " , i );
		}
	}
	return 0;
}
