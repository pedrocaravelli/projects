#include <stdio.h>


float velocidad (float tiemp, float distan) {

	float v = (distan / tiemp);
	return v;

}

float tiempo (float vel, float dist) {

	float t = (dist / vel);
	return t;

}

float distancia (float tiem, float veloci) {

	float d = (tiem * veloci);
	return d;

}

float main () {

	printf ("%f\n", velocidad(6, 100) );
	printf ("%f\n", tiempo(40, 1) );	
	printf ("%f\n", distancia(40, 40) );

}

