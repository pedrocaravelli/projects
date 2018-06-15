#include <stdio.h>

int main () {
	printf ("suma\n");
	printf ("%i\n", sum(1,2));
	printf ("contador\n");
	printf ("%i \n", rta(4));
	printf ("multiplicacion\n");
	printf ("%i\n", mult(5,5));
	return 0;
} 

int sum (int a, int b) {
	return a+b;
} 

int rta (int a) {
	int b=0;
	int x;
	for (x=0; x<=a; x=x+1) {
		b= b+x;
	}
	return b;
}


int mult (int a, int b) {
	return a*b;
} 


int fibonacci (int a, int b) {
	return a*b;
} 




