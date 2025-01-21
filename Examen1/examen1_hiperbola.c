/* Posibles salidas del programa
    1: Dentro del rectangulo que caracteriza la hiperbola
    2: Fuera del rectangulo y dentro de la hiperbola
    3: Sobre la hiperbola
    0: Fuera del rectangulo y fuera de la hiperbola
    */

#include<stdio.h>
#include<math.h>

int main() {
	float x,y,x0,y0,a,b,t1,t2,r,p;
    
    scanf("%f",&x);
    scanf("%f",&y);
    scanf("%f",&x0);
    scanf("%f",&y0);
    scanf("%f",&a);
    scanf("%f",&b);    

    if (a,b == 0)
    {
        printf("Error matemático");
    } else
    {
       t1 = (x-x0)*(x-x0)/(a*a);
       t2 = -(y-y0)*(y-y0)/(b*b);
       r = t1+t2;
       if (x<=a && y<=b)
       {
        p = 1;
       }
       else if (r > 1) {
        p = 2;
       }
       else if (r = 1)
       {
        p = 3;
       }
       else
       {
        p = 0;
       }
       printf("%.2f\n", p);    
    } 
}
