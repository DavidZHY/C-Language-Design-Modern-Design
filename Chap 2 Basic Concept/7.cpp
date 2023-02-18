#include <stdio.h>

int main () {
	int sum , a , b , c , d , temp;
	printf ("Enter a dollar amount:");
	scanf ("%d" , &sum);
	a = sum / 20;
	temp = sum % 20;
	b = temp / 10;
	temp = temp % 10;
	c = temp / 5;
	temp = temp % 5;
	d = temp;
	printf ("\n") ;
	printf ("$20 bills: %d\n" , a);
	printf ("$10 bills: %d\n" , b);
	printf (" $5 bills: %d\n" , c);
	printf (" $1 bills: %d\n" , d);
	return 0;
}
