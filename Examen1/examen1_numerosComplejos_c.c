
#include <stdio.h>
#include <math.h>
#define pi 3.14159265358979323846

int main()
{
    float a,b,r,theta;
    int n,k;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%d", &n);
    scanf("%d", &k);

   
    //Raiz
    r = sqrt((a*a)+(b*b));
    theta = atan(a/b);

    r = exp((1/n)*log(r));
    theta = (theta+(2*k*pi))/n;
    a = r*cos(theta);
    b = r*sin(theta);
    printf("(%.2f)+i(%.2f)\n",a,b);
}