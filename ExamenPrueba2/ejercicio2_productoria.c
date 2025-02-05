#include <stdio.h>
#include <math.h>

int main()
{
    float pi_ant;
    float pi, den;
    int i, j, es_primo, aux, pos, eps, dif;
    int primos[100] = {};

    pi = 0.75;
    i = 1;
    primos[0] = 3;
    eps = 1;
    pos = 1;
    do
    {
        es_primo = 0;
        aux = (2 * (i + 2)) - 1;
        for (j = 0; j < pos; j++)
        {
            int evaluar = primos[j];
            if (aux % primos[j] == 0)
            {
                es_primo = es_primo + 1;
            }
        }
        if (es_primo == 0)
        {
            primos[pos] = aux;
            if ((aux - 1) % 4 == 0)
            {
                den = aux - 1;
            }
            else
            {
                den = aux + 1;
            }
            pi_ant = pi;
            pi = pi_ant * (aux / den);
            dif = fabs(round(100*4*pi) - round(100*4*pi_ant));
            printf("%i : %i : %.2f : %.2f : %i\n", pos, aux, 4*pi, 4*pi_ant, dif);
            pos = pos + 1;
        }
        i = i + 1;
    } while (dif > eps && pos < 100);
    return 0;
}
