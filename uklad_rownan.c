#include <stdio.h>
#include <math.h>
int wczytaj_wspolczynniki (int a1, int b1, int c1, int a2, int b2, int c2)
{
printf("Podaj wspolczynniki pierwszego rownania\n");
printf("Podaj wspolczynnik a1 "); scanf("%i" , &a1);
printf("Podaj wspolczynnik b1 "); scanf("%i" , &b1);
printf("Podaj wspolczynnik c1 "); scanf("%i" , &c1);
printf("Podaj wspolczynniki drugiego rownania \n");
printf("Podaj wspolczynnik a2 "); scanf("%i" , &a2);
printf("Podaj wspolczynnik b2 "); scanf("%i" , &b2);
printf("Podaj wspolczynnik c2 "); scanf("%i" , &c2);
return (a1, b1, c1, a2, b2, c2);
}

int oblicz_wyznaczniki_glowny (int w, int a1, int b1, int a2, int b2)
{
w = a1*b2 - b1* a2;
return w;
}

int oblicz_wyznaczniki_glowny (int w, int a1, int b1, int a2, int b2)
{
w = a1*b2 - b1* a2;
return w;
}





float a1, b1, c1, a2, b2, c2, x, y

