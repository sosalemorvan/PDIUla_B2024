#include<stdio.h>
#include<math.h>

int main() {
    float a; // Se define el lado del cuadrado como a
    float area, p; //Se definen el area y el perimetro del cuadrado

    // se establece el valor del lado del cuadrado
    printf("Introduce el tamaño de los lados del cuadrado:\nLado a -> ");
    scanf("%f",&a);

    // se  establecen las ecuaciones para el perimetro y el area del cuadrado
    p = 4*a;
    area = a*a;

    printf("Para el cuadrado de lado %.2f tenemos:\nArea = %.2f\nPerimetro = %.2f\n",a, area,p);
}
