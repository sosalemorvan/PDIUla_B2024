#include <stdio.h>
#include <math.h>

int main()
{
    int x, xmax, i;
    int max = 1000;
    do
    {
        scanf("%d", &x);
    } while (!(x > 0));

    printf("%d ", x); // Imprime el valor x0
    i = 1;
    xmax = x;
    if (x == 1)
    {
        printf("\n%d : %d\n", xmax, i); // Imprime iteraciones 1 y valor maximo 1 si el x0 = 1
    }
    else
    {
        do
        {
            i = i + 1;
            if (x % 2 == 0)
            {
                x = x / 2;
            }
            else
            {
                x = (3 * x) + 1;
            }
            if (x > xmax)
            {
                xmax = x;
            }
            printf("%d ", x);
        } while (!(x == 1) && !(i > max));
        printf("\n%d : %d\n", xmax, i);
    }
    return 0;
}
