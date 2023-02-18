#include <stdio.h>

int gcd ( int a , int b );

int gcd ( int a , int b ) {
	int GCD , i = 1;
	while ( i < a || i < b ) {
		if ( a % i == 0 && b % i == 0 ) {
			GCD = i;
		}
		i++;
	}
	return GCD;
}

int main () {
	int a , b , GCD;
	printf ("Enter a fraction: ");
	scanf ("%d/%d" , &a , &b);
	GCD = gcd ( a , b );
	printf ("In lowest terms: %d/%d" , a / GCD , b / GCD );
	return 0;
}
