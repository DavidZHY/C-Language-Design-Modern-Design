#include <stdio.h>

int main () {
	float amt , ttl;
	printf ("Enter the amount: ");
	scanf ("%f" , &amt);
	if ( amt <= 750 ) {
		ttl = 0.01 * amt;
	}
	if ( amt <= 2250 && amt > 750 )  {
		ttl = 7.5 + 0.02 * ( amt - 750 );
	}
	if ( amt <= 3750 && amt > 2250 )  {
		ttl = 37.5 + 0.03 * ( amt - 2250 );
	}
	if ( amt <= 5250 && amt > 3750 )  {
		ttl = 82.5 + 0.04 * ( amt - 3750 );
	}
	if ( amt <= 7000 && amt > 5250 )  {
		ttl = 142.5 + 0.05 * ( amt - 5250 );
	}
	if (amt > 7000 )  {
		ttl = 230 + 0.06 * ( amt - 7000 );
	}
	printf ("Your tax is: %f" , ttl);
	return 0;
}
