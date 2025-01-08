/* 
El codigo resuelve la ecuacion 2 planteada en el examen de prueba de PDI.
    2. Espera los valores  -> regresa un valor y que es el resultado de la ecuación.
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define pi 3.14159265358979323846

int main() {
	float x,n,y,m,r;
    scanf("%f",&x);
    scanf("%f",&n);
    scanf("%f",&y);
    scanf("%f",&m);

    if (x == 0)
    {
        printf("Error matemático");
    } else
    {
       r = sqrt((1/x)+(n*y))*cos(2*pi*(1/2*(m+1)))/(((sin(2*pi*(1/2*(m+1))))+(x*x)/(1+1))*exp(abs(x-y)*(x*x)));
       printf("%.2f\n", r);
    } 
}
