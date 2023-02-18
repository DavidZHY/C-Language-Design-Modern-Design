#include <stdio.h>

int main () {
	int num , dix , une;
	printf ("Enter a two-digit number: ");
	scanf ("%d" , &num);
	dix = num / 10;
	une = num % 10;
	printf ("The reversal is: ");
	printf ("%d%d" , une , dix);
	return 0;
} 
