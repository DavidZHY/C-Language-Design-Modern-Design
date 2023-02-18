#include <stdio.h>

int main (){
	int m , d , y , mm , dm , ym;
	printf ("Enter a date (mm/dd/yy): ");
	scanf ("%d/%d/%d/" , &mm , &dm , &ym );
	if ( mm == 0 && dm == 0 && ym == 0 ) {
		printf ("ERR: No valid date entered.");
		return 0;
	} else {
		while ( 1 ){
			printf ("Enter a date (mm/dd/yy): ");
			scanf ("%d/%d/%d/" , &m , &d , &y );
			if ( m == 0 && d == 0 && y == 0 ) {
				break;
			} else {
				if ( y < ym || y == ym && m < mm || y == ym && m == mm && d < dm ) {
					ym = y;
					m = mm;
					d = dm;
				}
			}
		}
	}
	printf ("%d/%d/%d is the earliest date." , mm , dm , ym );
	return 0;
}
