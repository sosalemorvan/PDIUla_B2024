#include<stdio.h>
#include<math.h>

int main() {
    double x;
    x=1;
    while ((1+x)>1)
    {
        x = x/2;
    }
    x = 2*x;
    printf("El valor más pequeño es: %.30f\n", x);
return 0;
}
