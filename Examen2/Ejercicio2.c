#include <stdio.h>
#include <math.h>

int main()
{
    int k, i, j;
    int max = 1000;
    int p[1000] = {};
    p[0] = 3;
    p[1] = 0;
    p[2] = 2;

    do
    {
        scanf("%d", &k);
    } while (!(k > 0));

    int primos[k];

    primos[0] = 2;
    i = 0;
    j = 2;

    if (k == 1)
    {
        printf("%d\n", primos[0]);
    }
    else
    {
        do
        {
            j = j + 1;
            p[j] = p[j-2] + p[j-3];
            if (p[j]%j == 0)
            {
                i = i + 1;
                primos[i] = j;
            }
        } while (!(j > max) && !(i >= k));
        for (i = 0; i < k; i++)
        {
            printf("%d\n", primos[i]);
        } 
    }
    return 0;
}
