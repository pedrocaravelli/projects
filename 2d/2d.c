#include <stdio.h>
#include <math.h>

float degrees_to_radians (float grados) {

	float radian = grados * 2 * 3.141592  / 360;
	return radian;
}

float velocidad_x (float angulo, float velocidad) {

	float velocidad_x = cos(degrees_to_radians(angulo)) * velocidad ;
	return velocidad_x ;
}

float velocidad_y (float angulo, float velocidad) {

	float velocidad_y = sin(degrees_to_radians(angulo)) * velocidad ;
	return velocidad_y ;
}

float main () {

	printf ("velocidad en x %f\n", velocidad_x(50, 10) );
	printf ("velocidad en y %f\n", velocidad_y(50, 10) );

}
