#include <stdio.h>

int main () {
	int a , b , c , d , e , f , g , h , i , j , k , l , m , n , o , p;
	int row1 , row2 , row3 , row4;
	int col1 , col2 , col3 , col4;
	int dia1 , dia2;
	printf ("Enter the number from 1 to 16 in any order: \n");
	scanf ("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d" , &a , &b , &c , &d , &e , &f , &g , &h , &i , &j , &k , &l , &m , &n , &o , &p);
	printf ("%d\t%d\t%d\t%d\n" , a , b , c , d);
	printf ("%d\t%d\t%d\t%d\n" , e , f , g , h);
	printf ("%d\t%d\t%d\t%d\n" , i , j , k , l);
	printf ("%d\t%d\t%d\t%d\n" , m , n , o , p);
	row1 = a + b + c + d;
	row2 = e + f + g + h;
	row3 = i + j + k + l;
	row4 = m + n + o + p;
	col1 = a + e + i + m;
	col2 = b + f + j + n;
	col3 = c + g + k + o;
	col4 = d + h + l + p;
	dia1 = a + f + k + p;
	dia2 = m + j + g + d;
	printf ("Row sums: %d %d %d %d\n" , row1 , row2 , row3 , row4);
	printf ("Column sums: %d %d %d %d\n" , col1 , col2 , col3 , col4);
	printf ("Diagonal sums: %d %d\n" , dia1 , dia2);
	return 0;
} 
