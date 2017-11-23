#include <stdio.h>
#include <math.h>

void wczytaj (double *a1, double *b1, double *c1, double *a2, double *b2, double *c2) //* oznacza ze zmienne moga byc edytowalne
{
	puts("Podaj wspolczynnik a1: "); scanf("%lf", a1);  //%lf dla zmiennych double
	puts("Podaj wspolczynnik b1: "); scanf("%lf", b1);  //%ld dla zmiennych long int
	puts("Podaj wspolczynnik c1: "); scanf("%lf", c1);
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
// jezeli long int do %ld
// jezeli double to %lf
	double a1, b1, c1, a2, b2, c2;
	double W, Wx, Wy, x, y;
	wczytaj(&a1, &b1, &c1, &a2, &b2, &c2);
	W = wyznacznik_glowny (a1, b1, a2, b2);
	Wx = wyznacznik_x (b1, b2, c1, c2);
	Wy = wyznacznik_y (a1, a2, c1, c2);
	x = Wx/W;
	y = Wy/W;
	return 0;
}
