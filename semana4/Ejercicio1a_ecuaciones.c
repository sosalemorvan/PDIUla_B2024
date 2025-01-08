/* 
El codigo resuelve la ecuacion 1 planteada en el examen de prueba de PDI.
    1. Espera los valores a, b, n, x -> regresa un valor y que es el resultado de la ecuación.
*/

#include<stdio.h>
#include<math.h>

int main() {
	float a,b,n,x,y,t1,t2,t3;
    
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&n);
    scanf("%f",&x);

    if (n == -1 || n,a,b == 0 || x <= 0)
    {
        printf("Error matemático");
    } else
    {
       t1 = -exp((1/x)*sqrt((a*a)+(b*b)))/(n*((a*x)+b+3));
       t2 = -log((3*x)+((2*b)/(n+1)))/sqrt((2*n)+(1/(x*x)));
       t3 = (3/(4*n*n))*exp(log(a*b*(1/n))*log(x));
       y = t1+t2+t3;
       printf("%.2f\n", y);
    } 
}
