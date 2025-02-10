#include <stdio.h>
#include <math.h>

int main()
{
    int max = 1000;
    int n, i, j, k;
    float suma, p, aux, temp, std;
    float omax[1000];
    float omin[1000];

    do
    {
        scanf("%d", &n);
    } while (!(n > 0));

    float x[n];
    suma = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
        suma = suma + x[i];
    }

    p = suma / n;
    aux = 0;

    for (i = 0; i < n; i++)
    {
        temp = x[i] - p;
        aux = aux + (temp * temp);
    }

    std = sqrt(aux / (n - 1));
    j = 0;
    k = 0;

    for (i = 0; i < n; i++)
    {
        if (fabs(x[i] - p) < std)
        {
            omin[j] = x[i];
            j = j + 1;
        }
        else
        {
            omax[k] = x[i];
            k = k + 1;
        }
    }
    printf("\n%f\n%f\n\n", p, std);
    for (i = 0; i < j; i++)
    {
        printf("%f\n", omin[i]);
    }
    printf("\n");
    for (i = 0; i < k; i++)
    {
        printf("%f\n", omax[i]);
    }
    return 0;
}
