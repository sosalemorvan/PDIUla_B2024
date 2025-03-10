#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int mx = 1000;
    int k, i, a, b, min, max, n, contador,j;
    int x[mx];
    float suma, p, med;

    do
    {
        scanf("%d", &k);
        scanf("%d", &a);
        scanf("%d", &b);
    } while (!(k > 0) || !(a < b));

    i = 0;
    suma = 0;
    min = b;
    max = a;

    do
    {
        x[i] = a + rand() % (b - a + 1);
        suma = suma + x[i];
        p = suma / (i + 1);
        if (x[i] < min)
        {
            min = x[i];
        }
        if (x[i] > max)
        {
            max = x[i];
        }
        med = min + ((max - min) / 2);
        i = i + 1;
    } while (!(i >= k) || !(p > med));
    n = i;
    for (i = 0; i < n; i++)
    {
        contador = 0;
        for (j = 0; j < n; j++)
        {
            if (x[i] == x[j])
            {
                contador = contador + 1;
            }
        }
        printf("%d : %d\n", x[i], contador);
    }
    return 0;
}
