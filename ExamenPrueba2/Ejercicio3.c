#include <stdio.h>
#include <math.h>

// Función principal
int main() {
    int d; // Número de decimales exactos a calcular
    printf("Introduce el número de decimales para la aproximación de pi: ");

    do
    {
        scanf("%d", &d);
    } while (!(d >= 0));
    

    double epsilon = exp((-d)*log(10)); // Definir tolerancia con base en los decimales deseados
    double Z = 0;
    double ant = 0;
    int n = 0;
    double num1, num2, num3, den1, den2, den3, aux;

    do {
        ant = Z;

        // Determinar el signo de num1
        if (n % 2 == 0) {
            num1 = 1;
        } else {
            num1 = -1;
        }

        // Cálculo de num2
        aux = 1;
        if (n == 0) {
            num2 = 1;
        } else {
            for (int i = 1; i <= 4 * n; i++) {
                aux = aux * i;
            }
            num2 = aux;
        }

        // Cálculo de num3
        num3 = 21460 * n + 1123;

        // Cálculo de los denominadores
        if (n == 0) {
            den1 = 1;
            den2 = 1;
            den3 = 1;
        } else {
            aux = 1;
            for (int i = 1; i <= n; i++) {
                aux = aux * i;
            }
            den1 = exp(4 * log(aux)); // (n!)^4
            den2 = exp(4 * log(4 * n)); // 4^(4n)
            den3 = exp(2 * n * log(882)); // 882^(2n)
        }

        // Calcular el nuevo término de la serie
        Z = ant + (num1 * num2 * num3) / (den1 * den2 * den3);

        // Incrementar n para el siguiente término
        n++;
        double este = 3528/Z;
        double otro = 3528/ant;
        double dif = este-otro;
        num1 = 1;
    } while (fabs(3528 / Z - 3528 / ant) > epsilon); // Condición de parada

    // Calcular el valor final de pi
    double pi = 3528 / Z;
    printf("Aproximación de pi con %d decimales: %.15f\n", d, pi);

    return 0;
}
