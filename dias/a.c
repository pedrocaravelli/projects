#include <stdio.h>
	
int main() {
	
	printf ("segundos %i \n", minutos(horas(dias(167791))));
	return 0;
}	
	
int dias (int segundos)  {
	int d = segundos/86400;
	int resto = segundos - 86400 * d;
	printf ("dias %i\n", (d));
	return resto;
}	
	
int horas (int segundos) {

	int h = segundos/3600;
	int rest = segundos - 3600 * h;
	printf ("horas %i\n", (h));
	return rest;
}

int minutos (int segundos) {

	int m = segundos/60;
	int restoo = segundos - 60 * m;
	printf ("minutos %i\n", (m));
	return restoo;

}




