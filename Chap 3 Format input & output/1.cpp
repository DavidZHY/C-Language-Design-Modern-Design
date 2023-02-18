#include <stdio.h>

int main () {
	int day , month , year;
	printf ("Enter a date (mm/dd/yyyy): ");
	scanf ("%d/%d/%d" , &month , &day , &year);
	switch ( month < 10 ) {
		case 1 : {
			if ( day < 10 ) {
				printf ("You entered the date %d0%d0%d" , year , month , day);
			} else {
				printf ("You entered the date %d0%d%d" , year , month , day);
			}
			break;
		}
		case 0 : {
			if ( day < 10 ) {
				printf ("You entered the date %d%d0%d" , year , month , day);
			} else {
				printf ("You entered the date %d%d%d" , year , month , day);
			}
			break;
		}
	}
	return 0;
}
