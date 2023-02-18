#include <stdio.h>

int main () {
	int sum = 0;
	int a [ 5 ] [ 5 ] = { 0 };
	printf ("Enter row 1: ");
	for ( int i = 0 ; i < 5 ; i++ ) {
		scanf ( "%d" , &a [ 0 ] [ i ] );
	}
	printf ("Enter row 2: ");
	for ( int i = 0 ; i < 5 ; i++ ) {
		scanf ( "%d" , &a [ 1 ] [ i ] );
	}
	printf ("Enter row 3: ");
	for ( int i = 0 ; i < 5 ; i++ ) {
		scanf ( "%d" , &a [ 2 ] [ i ] );
	}
	printf ("Enter row 4: ");
	for ( int i = 0 ; i < 5 ; i++ ) {
		scanf ( "%d" , &a [ 3 ] [ i ] );
	}
	printf ("Enter row 5: ");
	for ( int i = 0 ; i < 5 ; i++ ) {
		scanf ( "%d" , &a [ 4 ] [ i ] );
	}
	printf ("Row totals: ");
	for ( int i = 0 ; i < 5 ; i++ ) {
		sum += a [ 0 ] [ i ];
	}
	printf ( "%d " , sum );
	sum = 0;
	for ( int i = 0 ; i < 5 ; i++ ) {
		sum += a [ 1 ] [ i ];
	}
	printf ( "%d " , sum );
	sum = 0;
	for ( int i = 0 ; i < 5 ; i++ ) {
		sum += a [ 2 ] [ i ];
	}
	printf ( "%d " , sum );
	sum = 0;
	for ( int i = 0 ; i < 5 ; i++ ) {
		sum += a [ 3 ] [ i ];
	}
	printf ( "%d " , sum );
	sum = 0;
	for ( int i = 0 ; i < 5 ; i++ ) {
		sum += a [ 4 ] [ i ];
	}
	printf ( "%d\n" , sum );
	sum = 0;
	printf ("Column totals: ");
	for ( int i = 0 ; i < 5 ; i++ ) {
		sum += a [ i ] [ 0 ];
	}
	printf ( "%d " , sum );
	sum = 0;
	for ( int i = 0 ; i < 5 ; i++ ) {
		sum += a [ i ] [ 1 ];
	}
	printf ( "%d " , sum );
	sum = 0;
	for ( int i = 0 ; i < 5 ; i++ ) {
		sum += a [ i ] [ 2 ];
	}
	printf ( "%d " , sum );
	sum = 0;
	for ( int i = 0 ; i < 5 ; i++ ) {
		sum += a [ i ] [ 3 ];
	}
	printf ( "%d " , sum );
	sum = 0;
	for ( int i = 0 ; i < 5 ; i++ ) {
		sum += a [ i ] [ 4 ];
	}
	printf ( "%d" , sum );
	sum = 0;
	return 0;
}
