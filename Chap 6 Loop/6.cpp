#include <stdio.h>

int main () {
	int a , i = 1;
	printf ("Enter a number: ");
	scanf ("%d" , &a );
	a /= 2;
	while ( i <= a ) {
		printf ("%d\n" , i * i * 4 );
		i++;
	}
	return 0;
}
