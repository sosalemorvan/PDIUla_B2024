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
