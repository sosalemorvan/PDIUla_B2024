/* Entrada: 
r ∈ R+ r: radio

Obtener(r)
area ← 4*π*r^2
volumen ← (4/3)*π*r^3
Devolver(area,volumen)

Salida: 
area, volumen ∈ R+ */ 

#include<stdio.h>
#include<math.h>
#define pi 3.14159265358979323846

int main() {
	float r,area,volumen;

    printf("r ->");
    scanf("%f",&r);
    
    area = 4*pi*r*r;
    volumen = pi*r*r*r*4/3;

    printf("%.2f\n%.2f\n",area,volumen);
}