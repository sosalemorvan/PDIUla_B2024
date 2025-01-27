#include<stdio.h>
#include<math.h>

int main() {
	float x0,x,f,df,i;
    int n;

    x0 = 0;
    n = 0;
    while (x0 == 0 && n <= 0) {
		scanf("%f", &x0);
        scanf("%f", &n);
	}

    f = (log(x0)/log(10)) + x0;
    df = (1/x0)+1;
    x = x0 - (f/df);

	
    while (fabs(x-x0) > (exp(1)) && (1<=n))
    {
        x0 = x;
        f = (log(x0)/log(10)) + x0;
        df = (1/x0)+1;
        x = x0 - (f/df);
        n = n + 1;
    }

    printf("%.2f", x);
	return 0;
}
