#include<stdio.h>
#include<math.h>

int main() {
    int monto;
    int n = 6;
    int billetes[] = {100,50,20,10,5,1};
    int billetesUsados[] = {0,0,0,0,0,0};
    float deuda, vuelto, decimal;

    deuda = 0;
    
    while (deuda<= 0)
    {
        scanf("%f", &deuda);
    }

    monto = trunc(deuda);
    decimal = deuda - monto;

    for (int i = 0; i < n; i++)
    {
        if (monto >= billetes[i])
        {
            billetesUsados[i] = monto/billetes[i];
            monto = monto % billetes[i];
        }
    }
    
    if (decimal > 0)
    {
        billetesUsados[n-1] = billetesUsados[n-1]+1;
        vuelto = billetes[n-1] - decimal;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d : %d \n", billetesUsados[i], billetes[i]);
    }
    printf("%0.2f \n", vuelto);
return 0;
}
