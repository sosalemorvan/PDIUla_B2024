/* Entrada: 
r, h ∈ R+ r: radio, h:altura

Obtener(r,h)
area ← (PI*r)*(r+raiz(h*h+r*r))
volumen ← (1/3)*PI*r*r*h
Devolver(area,volumen)

Salida: 
area, volumen ∈ R */ 

#include<stdio.h>
#include<math.h>
#define pi 3.14159265358979323846

int main() {
	float r,h,area,volumen;

    scanf("%f",&r);
    scanf("%f",&h);

    area = (pi*r)*(r+sqrt((h*h)+(r*r)));
    volumen = pi*r*r*h/3;

    printf("%.2f\n%.2f\n",area,volumen);
}