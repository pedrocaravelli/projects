#include <stdio.h>

int main () {

	int a[] = {2, 4, 6, 8, 10, 12, 13};
	int x = sizeof(a) / sizeof(a[0]);	
	int i;
	for (i = 0; i < x; i = i + 1){
	
		printf("%i\n" , a[i]);
	}
	
	printf("%i\n\n" , hola(a, x));
	printf("%i\n" , reversa(a, x));
	
	return 0;
}


int hola (int a[], int size) {
	int i;
	int suma = 0;
	for (i = 0; i < size; i = i + 1){
		suma = suma + a[i];
	}
	return suma;
}

int reversa (int a[], int size) {

	int i;
	for (i = size; i >= 0; i = i - 1){

		printf("%i\n" , a[i]);

	}
	
	return 0;
	 

}
