#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c; //Se definen los lados del triangulo como a,b y c
    float area, p; //Se definen el area y el semiperimetro del triangulo respectivamente

    // se establecen los valores de los lados del triangulo
    printf("Introduce los valores de los tres lados: a, b y c del triangulo:\nLado a -> ");
    scanf("%f",&a);
    printf("Lado b -> ");
    scanf("%f",&b);
    printf("Lado c -> ");
    scanf("%f",&c);

    // se  establecen las ecuaciones para el semiperimetro y el area del triangulo
    p = (a+b+c)/2;
    area = sqrt(p*(p-a)*(p-b)*(p-c));
    p = 2*p; // Se consigue el perimetro duplicando el semiperimetro
    printf("Para el triangulo dado tenemos:\nArea = %.2f\nPerimetro = %.2f\n", area,p);
}

// Aca comienza el codigo exportado de PSeInt

/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

/*#include<stdio.h>
#include<math.h>

int main() {
	float a;
	float area;
	float b;
	float c;
	float p;
	printf("Define cada uno de los lados del triángulo :\n");
	printf("a\n");
	scanf("%f", &a);
	printf("b\n");
	scanf("%f", &b);
	printf("c\n");
	scanf("%f", &c);
	p = (a+b+c)/2;
	area = sqrtf(p*(p-a)*(p-b)*(p-c));
	p = 2*p;
	printf("El area del triangulo de lados %f, %f y %f es: %f y el perimetro es: %f\n", a, b, c, area, p);
	return 0;
}*/

