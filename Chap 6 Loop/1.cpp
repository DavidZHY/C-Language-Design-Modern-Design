#include <stdio.h>

int main () {
	float max , a;
	printf ("Enter a number: ");
	scanf ("%f" , &a);
	if ( a == 0 ) {
		printf ("The largest number entered was 0.");
	} else {
		max = a;
		while ( a != 0 ) {
			printf ("Enter a number: ");
			scanf ("%f" , &a);
			if ( a < max ) {
				
			} else {
				max = a;
			}
		}
		printf ("\nThe largest number entered was %f." , max);
	}
	return 0;
}
