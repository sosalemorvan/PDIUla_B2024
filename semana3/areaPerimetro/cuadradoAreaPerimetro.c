#include<stdio.h>
#include<math.h>

int main() {
    float a; // Se define el lado del cuadrado como a
    float area, p; //Se definen el area y el perimetro del cuadrado25


    // se establece el valor del lado del cuadrado
    printf("Introduce el tamaño de los lados del cuadrado:\nLado a -> ");
    scanf("%f",&a);

    // se  establecen las ecuaciones para el perimetro y el area del cuadrado
    p = 4*a;
    area = a*a;

    printf("Para el cuadrado de lado %.2f tenemos:\nArea = %.2f\nPerimetro = %.2f\n",a, area,p);
}


// Aca empieza el codigo exportado de PSeInt
/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

/*#include<stdio.h>

int main() {
	float a;
	float area;
	float perimetro;
	printf("Escribe el largo de los lados del cuadrado:\n");
	scanf("%f", &a);
	area = a*a;
	perimetro = 4*a;
	printf("El area del cuadrado de lado %f es: %f y el perimetro es: %f\n", a, area, perimetro);
	return 0;
}*/

