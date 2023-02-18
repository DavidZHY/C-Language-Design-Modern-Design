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
	printf ("digit:      0   1   2   3   4   5   6   7   8   9\n");
	printf ("Occurances: ");
	for ( int i = 0 ; i < 10 ; i++ ) {
		printf ( "%d   " , digit [ i ] );
	}
	return 0;
}
