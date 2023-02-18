#include <stdio.h>

int main () {
	int num , digit = 0 , index = 1;
	printf ("Enter a number: ");
	scanf ("%d" , &num);
	while (num / index != 0) {
		digit++;
		index *= 10;
	}
	printf ("The number %d  has %d digits" , num , digit); 
	return 0;
}
