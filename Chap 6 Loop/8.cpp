#include <stdio.h>

int main () {
	int days , st , cnttb = 1 , cntdy = 1;//cnttb: count tabs ; cntdy: count day
	printf ("Enter number of days in month: ");
	scanf ("%d" , &days );
	printf ("Enter starting day of the week (1 = Sun, 7 = Sat): ");
	scanf ("%d" , &st);
	while ( cnttb < st ) {
		printf ("\t");
		cnttb++;
	}
	while ( cntdy <= days ) {
		if ( cnttb == 7 ) {
			printf ("\n");
			cnttb = 1;
		}
		printf ("%d\t" , cntdy);
		cntdy++;
		cnttb++;
		
	}
	return 0;
}
