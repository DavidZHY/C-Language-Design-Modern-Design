#include <stdio.h>

int main () {
	int i1 , i2;
	printf ("Please enter a two-digit number: ");
	scanf ("%1d%1d" , &i1 , &i2);
	printf ("The reversal is: %1d%1d" , i2 , i1);
	return 0;
}
