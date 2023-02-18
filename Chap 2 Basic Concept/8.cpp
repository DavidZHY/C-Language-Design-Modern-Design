#include <stdio.h>

int main () {
	float amount , rate , payment , result;
	printf ("Enter amount of loan: ");
	scanf ("%f" , &amount);
	printf ("Enter interest rate: ");
	scanf ("%f" , &rate);
	printf ("Enter monthly payment: ");
	scanf ("%f" , &payment);
	result = amount - payment + amount * rate/1200;
	printf ("Balance remaining after first payment: $%.2f\n" , result);
	result = result - payment + result * rate/1200;
	printf ("Balance remaining after second payment: $%.2f\n" , result);
	result = result - payment + result * rate/1200;
	printf ("Balance remaining after third payment: $%.2f\n" , result);
	return 0;
}
