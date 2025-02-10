#include <stdio.h>

// Función para aproximar pi usando el método del pseudocódigo
double aproximar_pi(int n) {
    double frac, den, imp, r;
    
    for (int i = n; i >= 1; i--) {
        if (i == n)
            frac = 0;
        else
            frac = (i * i) / den;
        
        imp = (2 * i) - 1;
        den = imp + frac;
    }
    
    r = 4.0 / den;
    return r;
}

int main() {
    int n;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    
    double pi_aprox = aproximar_pi(n);
    printf("Aproximación de pi con n=%d: %lf\n", n, pi_aprox);
    
    return 0;
}
