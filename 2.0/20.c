#include <stdio.h>

int main () {

	printf("%i\n" , scan() + scan());
	return 0;

}

int scan(){
	int a[1];
	printf("Decime un numero: ");
	scanf("%i", a);
	return a[0];
}



