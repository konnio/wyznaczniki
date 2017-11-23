#include <stdio.h>

void wczytaj (double *a1, double *b1, double *c1, double *a2, double *b2, double *c2) //* oznacza ze zmienne moga byc edytowalne
{										      //  deklaracja adresu dla zmiennej double
	puts("Podaj wspolczynnik a1: "); scanf("%lf", a1);  //%lf dla zmiennych double
	puts("Podaj wspolczynnik b1: "); scanf("%lf", b1);  //%ld dla zmiennych long int
	puts("Podaj wspolczynnik c1: "); scanf("%lf", c1);  //bez & bo jest przy wywolani
	puts("Podaj wspolczynnik a2: "); scanf("%lf", a2);
	puts("Podaj wspolczynnik b2: "); scanf("%lf", b2);
	puts("Podaj wspolczynnik c2: "); scanf("%lf", c2);
}

double wyznacznik_glowny (double a1, double a2, double b1, double b2) {
	return a1*b2 - b1*a2;
}

double wyznacznik_x (double b1, double b2, double c1, double c2) {
	return c1*b2 - b1*c2;
}

double wyznacznik_y (double a1, double a2, double c1, double c2) {
	return a1*c2 - c1*a2;
}


int main () {
	double a1, b1, c1, a2, b2, c2;
	double W, Wx, Wy, x, y;
	wczytaj(&a1, &b1, &c1, &a2, &b2, &c2); //& - przekazuje adres w pamieci gdzie dane ktore beda wprowadzane
	W = wyznacznik_glowny (a1, b1, a2, b2);
	Wx = wyznacznik_x (b1, b2, c1, c2);
	Wy = wyznacznik_y (a1, a2, c1, c2);
	x = Wx / W;
	y = Wy / W;
	printf ("x = %lf, y = %lf\n", x, y);
	return 0;
}
