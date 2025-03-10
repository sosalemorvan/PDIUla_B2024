#include <stdio.h>
#include <math.h>

double obtenerX(int n)
{
    double x0, temp;
    if (!(n > 0))
    {
        printf("Error\n");
    }
    else
    {
        x0 = sqrt(2);
        temp = x0;

        for (int i = 1; i <= n; i++)
        {
            temp = (1.0 / 2.0) * (sqrt(temp) + (1 / sqrt(temp)));
        }

        return temp;
    }
}


double obtenerY(int n) {
    double y,x_prev;
    if (n < 1) {
        printf("Error\n");
    }

    y = exp((1.0/4.0)*log(2));

    for (int i = 2; i <= n; i++) {
        x_prev = obtenerX(i - 1);
        y = (y * sqrt(x_prev) + (1 / sqrt(x_prev))) / (y + 1);
    }
    return y;
}


int main() {
    int n;
    double valPi, temp,x,y;
    do {
        scanf("%d", &n);
    } while (!(n > 0));

    valPi = 2+sqrt(2);
    temp = valPi;
    for (int i = 1; i <= n; i++) {
        x = obtenerX(i);
        y = obtenerY(i);
        valPi = temp * ((x + 1) / (y + 1));
        temp = valPi;
    }
    printf("%.20f\n", valPi);
    return 0;
}