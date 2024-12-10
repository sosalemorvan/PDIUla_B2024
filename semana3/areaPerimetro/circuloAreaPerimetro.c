#include<stdio.h>
#include<math.h>


int main() {
	float r,area,perimetro,pi;
    pi = 4*atan(1);

    printf("Escribe el radio del circulo: \n");
    scanf("%f",&r);
    
    area = pi*r*r;
    perimetro = 2*pi*r;

    printf("Para el circulo de radio %.2f tenemos:\nArea = %.2f\nPerimetro = %.2f\n", r, area,perimetro);
}
