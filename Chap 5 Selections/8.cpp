#include <stdio.h>

int main () {
	float hr , min , minute;
	printf ("Enter a 24-hour time: ");
	scanf ("%f:%f" , &hr , &min);
	minute = 60 * hr + min;
	if ( minute < 531.5 ) {
		printf ("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
	}
	if ( minute > 531.5 && minute < 631 ) {
		printf ("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
	}
	if ( minute == 631 ) {
		printf ("Closest departure time is 9:43 a.m. and 11:19 a.m., arriving at 11:52 a.m. and 1:31 p.m.");
	}
	if ( minute > 631 && minute < 723 ) {
		printf ("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
	}
	if ( minute == 723 ) {
		printf ("Closest departure time is 11:19 a.m. and 12:47 p.m., arriving at 1:31 p.m. and 3:00 p.m.");
	}
	if ( minute > 723 && minute < 803.5 ) {
		printf ("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
	}
	if ( minute > 803.5 && minute < 892.5 ) {
		printf ("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
	}
	if ( minute > 892.5 && minute < 1042.5 ) {
		printf ("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
	}
	if ( minute > 1042.5 && minute < 1222.5 ) {
		printf ("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
	}
	if ( minute > 1222.5 ) {
		printf ("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
	}
	return 0;
}
