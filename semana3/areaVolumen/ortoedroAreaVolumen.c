/* Entrada: 
h,l,a ∈ R+ h:alto, l:largo, a:profundidad

Salida: 
area, volumen ∈ R

Algoritmo:
Obtener(h,l,a)
area ← 2*(a*l+a*h+l*h)
volumen ← (a*l*h)
Devolver(area,volumen)
*/ 

#include<stdio.h>
#include<math.h>


int main() {
	float h,l,a,area,volumen;

    scanf("%f",&h);
    scanf("%f",&l);
    scanf("%f",&a);

    area = 2*((a*l)+(a*h)+(l*h));
    volumen = a*l*h;

    printf("%.2f\n%.2f\n", area,volumen);
}
