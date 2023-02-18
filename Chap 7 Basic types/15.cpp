#include <stdio.h>

int main () {
	int a , i = 1 , res = 1;
	printf ("Enter a positive integer: ");
	scanf ("%d" , &a);
	while ( i <= a ) {
		res *= i;
		i++;
	}
	printf ("Factorial of %d: %d" , a , res);
	return 0;
}
