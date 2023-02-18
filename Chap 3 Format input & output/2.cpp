#include <stdio.h>

int main () {
	char S = 36;
	int number;
	float price;
	char date [10];
	printf ("Enter item number: ");
	scanf ("%d" , &number);
	printf ("Enter unit price: ");
	scanf ("%f" , &price);
	printf ("Enter purchase date (mm/dd/yyyy): ");
	scanf ("%s" , date);
	printf ("Item    Unit            Purchase\n");
	printf ("        Price           Date\n");
	printf ("%d\t%c%.2f\t\t%s" , number , S , price , date);
	return 0;
} 
