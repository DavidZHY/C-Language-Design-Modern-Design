#include <stdio.h>

int main () {
	int a , b , c , d , A , B;
	printf ("Enter two fractions seperated by a plus sign: ");
	scanf ("%d/%d+%d/%d" , &a , &b , &c , &d);
	A = b * d;
	B = a * d + b * c;
	printf ("The sum is %d/%d" , A , B);
	return 0;
} 
