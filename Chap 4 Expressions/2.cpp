#include <stdio.h>

int main () {
	int num , hun , dix , une;
	printf ("Enter a three-digit number: ");
	scanf ("%d" , &num);
	hun = num / 100;
	num %= 100;
	dix = num / 10;
	une = num % 10;
	printf ("The reversal is: ");
	printf ("%d%d%d" , une , dix , hun);
	return 0;
} 
