/* Salidas del programa: Operaciones con los numeros complejos de terminos ingresados a1,b1,a2,b2
    1. Suma
    2. Resta
    3. Multiplicacion
    4. Division
    */

#include <stdio.h>
#include <math.h>

int main()
{
    float a1, b1, a2, b2, r1, theta1, r2, theta2, asuma,bsuma, aresta,bresta, amult,bmult, adiv,bdiv,r3,theta3;

    scanf("%f", &a1);
    scanf("%f", &b1);
    scanf("%f", &a2);
    scanf("%f", &b2);

    r1 = sqrt((a1*a1)+(b1*b1));
    theta1 = atan(a1/b1);
    r2 = sqrt((a2*a2)+(b2*b2));
    theta2 = atan(a2/b2);

    // Suma
    asuma = a1+a2;
    bsuma = b1+b2;
    printf("(%.2f)+i(%.2f)\n",asuma,bsuma);
    // Resta
    aresta = a1-a2;
    bresta = b1-b2;
    printf("(%.2f)+i(%.2f)\n",aresta,bresta);
    //Multiplicacion
    r3 = r1*r2;
    theta3 = theta1+theta2;
    amult = r3*cos(theta3);
    bmult = r3*sin(theta3);
    printf("(%.2f)+i(%.2f)\n",amult,bmult);
    //Division
    r3 = r1/r2;
    theta3 = theta1-theta2;
    adiv = r3*cos(theta3);
    bdiv = r3*sin(theta3);
    printf("(%.2f)+i(%.2f)\n",adiv,bdiv);
}
