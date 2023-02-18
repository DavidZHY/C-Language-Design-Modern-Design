#include <stdio.h>

int main () {
	float a;
	printf ("Please enter x:");
	scanf ("%f" , &a);
	a = 3.0f * a * a * a * a * a + 2.0f * a * a * a * a - 5.0f * a * a * a - a * a + 7.0f * a - 6.0f;
	printf ("The result is: %.3f" , a); 
	return 0;
}
