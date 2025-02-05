#include<stdio.h>
#include<math.h>

int main() {
    int n,i,j;
    double num,den,pi,imp, res;

    scanf("%d",&n);

    res = 0;
    for (i = 1; i <= n; i++)
    {
        j = n-i+1;
        imp = (2*j)+1;
        num = j*j;
        den = imp+res;
        res = num/den;
    }
    
    pi = 4/(1+res);
    printf("%.15f",pi);
return 0;
}
