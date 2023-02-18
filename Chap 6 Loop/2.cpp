#include <stdio.h>

int main () {
	int a , b , GCD , i = 1;
	printf ("Enter 2 integers: ");
	scanf ("%d %d" , &a , &b);
	while ( i < a || i < b ) {
		if ( a % i == 0 && b % i == 0 ) {
			GCD = i;
		}
		i++;
	}
	printf ("Greatest common divisor: %d" , GCD);
	return 0;
}
