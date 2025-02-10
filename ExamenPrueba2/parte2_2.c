#include <stdio.h>
#include <math.h>

#define EPS 0.1

int main() {
    double eps = 0.1;
    double aprox = 1;
    int primo = 3;
    int primos[1000];
    primos[0] = 3; // First prime
    int j = 1; // Index for primes array
    int esPrimo = 0;
    int encontrado = 0;
    double ant;
    double err;

    do {
        ant = aprox;

        // Step 1: Approximation calculation
        if ((primo + 1) % 4 == 0) {
            aprox = ant * primo / (primo + 1);
        } else {
            aprox = ant * primo / (primo - 1);
        }

        // Step 2: Find the next prime
        encontrado = 0;
        while (encontrado == 0) {
            primo += 2; // Skip even numbers
            esPrimo = 0;
            for (int i = 0; i < j; i++) {
                if (primo % primos[i] == 0) {
                    esPrimo = 1;
                    break;
                }
            }

            if (esPrimo == 0) {
                primos[j] = primo;
                j++;
                encontrado = 1;
            }
        }

        // Step 3: Calculate the error
        err = 4 * fabs(aprox - ant);

    } while (err > eps); // Continue until the error is within epsilon

    // Step 4: Return the approximation of pi
    printf("Approximation of pi: %f\n", 4 * aprox);

    return 0;
}
