#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979323846


int main() {
	float r,area,perimetro;

    scanf("%f",&r);
    
    area = PI*r*r;
    perimetro = 2*PI*r;

    printf("%.2f\n%.2f\n",area,perimetro);
}
