#include<stdio.h>
#include<math.h>


int main() {
	float area;
	float perimetro;
	float r;
	printf("Escribe el radio del circulo:\n");
	scanf("%f", &r);
	area = M_PI*r*r;
	perimetro = 2*M_PI*r;
	printf("El area del circulo de radio %f es: %f y el perimetro es: %f\n", r, area, perimetro);
	return 0;
}
