
#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,p,r,theta;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &p);


    //Potencia
    r = sqrt((a*a)+(b*b));
    theta = atan(a/b);
    r = r*p;
    theta = theta*p;
    a = r*cos(theta);
    b = r*sin(theta);
    printf("(%.2f)+i(%.2f)\n",a,b);
}
