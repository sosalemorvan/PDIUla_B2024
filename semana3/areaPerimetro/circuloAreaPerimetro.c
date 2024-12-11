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


// Aca comienza el codigo exportado por PSeInt

/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

/*#include<stdio.h>
#include<math.h>

int main() {
	float area;
	float perimetro;
	float pi;
	float r;
	printf("Escribe el radio del circulo:\n");
	scanf("%f", &r);
	area = M_PI*r*r;
	perimetro = 2*M_PI*r;
	printf("El area del circulo de radio %f es: %f y el perimetro es: %f\n", r, area, perimetro);
	return 0;
}*/

