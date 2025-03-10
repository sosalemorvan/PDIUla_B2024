#include <stdio.h>

int sumaComp(int n)
{
    if (!(n > 0))
    {
        printf("Error");
    }
    else
    {
        int suma = 0;
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                suma = suma + i;
            }
        }
        return suma;
    }
}


int main()
{
    int n;
    do
    {
        scanf("%d", &n);
    } while (!(n>0));

    if (sumaComp(n) == n)
    {
        printf("Es perfecto\n");
    }
    else
    {
        printf("No es perfecto\n");
    }

    return 0;
}