#include <stdio.h>

int main () {
	float a;
	printf ("Please input x:");
	scanf ("%f" , &a);
	a = ((((a + 2.0f) * a - 5.0f) * a - 1.0f) * a + 7.0f) * a - 6.0f;
	printf( "The result is: %.3f" , a); 
	return 0;
}
