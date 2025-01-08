/* 
El codigo resuelve el ejercicio 2 planteada en el examen de prueba de PDI.

Comprueba si un punto definido se encuentra dentro del volumen encerrado por 3 superficies distintas, una esfera, un elipsoide y un cono.
    Entrada: x,y,z,x0,y0,z0,a,b,c,r -> x,y,z son las coordenadas del punto. x0,y0,z0 son el centro de las superficies. a,b,c son los semiejes del elipsoide. r es el radio de la esfera
    Salida: n -> Cantidad de superficies en las que esta contenido el punto
*/

#include<stdio.h>
#include<math.h>

int main() {
	float x,y,z,x0,y0,z0,a,b,c,r,m;
    int n;
    scanf("%f",&x);
    scanf("%f",&y);
    scanf("%f",&z);
    scanf("%f",&x0);
    scanf("%f",&y0);
    scanf("%f",&z0);
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&r);

    n = 0;

    if (a,b,c == 0)
    {
        printf("Error matemático");
    } else
    {
        m = ((x-x0)*(x-x0))+((y-y0)*(y-y0))+((z-z0)*(z-z0));
        if (m < (r*r))
        {
            n = n+1;
        }
        m = (((x-x0)*(x-x0))/(a*a))+(((y-y0)*(y-y0))/(b*b))-(((z-z0)*(z-z0))/(c*c));
        if (m < 1)
        {
            n = n+1;
        }
        m = ((x-x0)*(x-x0))+((y-y0)*(y-y0))-((z-z0)*(z-z0));
        if (m < 0)
        {
            n = n+1;
        }

        printf("\n%d\n",n);
    } 
    return 0;
}
