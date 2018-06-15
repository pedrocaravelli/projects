#include <stdio.h>

float cuenta (float mFe, float Tf, float TiH2O, float TiFe) {
	float cFe = 448;
	float cH2O = 4186;

	float mH2O = (-mFe * cFe * (Tf - TiFe )) / (cH2O * (Tf - TiH2O));
	return mH2O;
}


int main () {

	printf ("%f\n", cuenta(5, 25, 20, 250));

}

