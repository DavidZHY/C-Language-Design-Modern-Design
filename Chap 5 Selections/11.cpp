#include <stdio.h>

int main () {
	int num , dix , une;
	printf ("Enter a two digit number: ");
	scanf ("%d" , &num);
	switch ( num ) {
		case 10 : {
			printf ("you entered the number ten.");
			return 0;
		}
		case 11 : {
			printf ("you entered the number eleven.");
			return 0;
		}
		case 12 : {
			printf ("you entered the number twelve.");
			return 0;
		}
		case 13 : {
			printf ("you entered the number thirteen.");
			return 0;
		}
		case 14 : {
			printf ("you entered the number fourteen.");
			return 0;
		}
		case 15 : {
			printf ("you entered the number fifteen.");
			return 0;
		}
		case 16 : {
			printf ("you entered the number sixteen.");
			return 0;
		}
		case 17 : {
			printf ("you entered the number seventeen.");
			return 0;
		}
		case 18 : {
			printf ("you entered the number eighteen.");
			return 0;
		}
		case 19 : {
			printf ("you entered the number ninteen.");
			return 0;
		}
		default : {
			
		}
	}
	dix = num / 10;
	une = num % 10;
	switch ( dix ) {
		case 2 : {
			printf ("you entered the number twenty-");
			break;
		}
		case 3 : {
			printf ("you entered the number thirty-");
			break;
		}
		case 4 : {
			printf ("you entered the number forty-");
			break;
		}
		case 5 : {
			printf ("you entered the number fifty-");
			break;
		}
		case 6 : {
			printf ("you entered the number sixty-");
			break;
		}
		case 7 : {
			printf ("you entered the number seventy-");
			break;
		}
		case 8 : {
			printf ("you entered the number eighty-");
			break;
		}
		case 9 : {
			printf ("you entered the number ninty-");
			break;
		}
		default : {
			
		}
	}
	switch ( une ) {
		case 1 : {
			printf ("one.");
			break;
		}
		case 2 : {
			printf ("two.");
			break;
		}
		case 3 : {
			printf ("three.");
			break;
		}
		case 4 : {
			printf ("four.");
			break;
		}
		case 5 : {
			printf ("five.");
			break;
		}
		case 6 : {
			printf ("six.");
			break;
		}
		case 7 : {
			printf ("seven.");
			break;
		}
		case 8 : {
			printf ("eight.");
			break;
		}
		case 9 : {
			printf ("nine.");
			break;
		}
		default : {
			
		}
	}
	return 0;
}
