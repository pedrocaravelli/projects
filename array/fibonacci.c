#include <stdio.h>

int main () {

	int a = 54;
	int b[a];
	int joya[1];
	fibonacci(b, a);
	// b tiene informacion guardada	
	hola(b, a);
	scan(joya);
	
	
}

int fibonacci (int b[], int size) {
	
	int x = 0; // posicion n - 2
	int y = 1; // posicion n - 1

	b[0] = x;
	b[1] = y;
	int i;

	for (i = 2; i < size; i = i + 1) {
		int t = x + y;
		b[i] = t;
		x = y;	
		y = t;
	}

	return 0;
} 

int hola (int b[], int a){
	int i;	
	for (i = 0; i < a; i = i + 1){
		printf("%i\n" , b[i]);
	}
	return 0;
}

int scan (int joya[]){

	scanf("decime un numero %i", joya);
	printf("%i\n" , joya[0]);
}
