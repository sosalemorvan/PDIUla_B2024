
#include <stdio.h>
#include <math.h>
#define pi 3.14159265358979323846

int main()
{
    float a,b,r,theta;
    int k;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%d", &k);

   
    //Logaritmo natural
    r = sqrt((a*a)+(b*b));
    theta = atan(a/b);
    a = log(r);
    b = (theta+(2*k*pi));
    printf("(%.2f)+i(%.2f)\n",a,b);
}