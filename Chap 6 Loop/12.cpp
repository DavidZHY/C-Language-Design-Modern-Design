#include <stdio.h>

double mul (double a);

double mul (double a) {
	double i = 1 , rslt = 1;
	while (i <= a) {
		rslt *= i;
		i++;
	}
	return rslt;
}

int main () {
	double n , i = 1;
	double ans = 1;
	printf ("Enter an ending ¦Å: ");
	scanf ("%lf" , &n);
	while ( 1.0 / mul (i) >= n) {
		ans += 1.0 / mul (i);
		i++;
	}
	printf ("e approxmately equals to: %lf" , ans);
	return 0;
}
