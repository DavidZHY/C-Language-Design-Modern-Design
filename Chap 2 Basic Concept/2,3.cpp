#include <stdio.h>

int main () {
	float r , S;
	printf ("The radius of the sphere is:");
	scanf ("%f" , &r);
	S = r * r * r * 3.1415926 * 3.0f / 4.0f;
	printf ("The volume of the sphere is:%f" , S);
	return 0;
}
