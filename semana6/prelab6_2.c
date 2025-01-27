#include<stdio.h>
#include<math.h>

int main() {
	float a,b,c,f_a,f_b,f_c;
	
	f_a,f_b = 0;
	b = -1;
	a = -1;
	while (f_a*f_b>=0 && a,b < 0) {
		scanf("%f", &a);
		scanf("%f", &b);
		f_a = (log(a)/log(10)) + a;
		f_b = (log(b)/log(10)) + b;
	}

	c = 1;
	f_c = (log(c)/log(10)) + c;
    while (fabs(a-b) > (exp(1)) && c != 0)
    {
        c = (a+b)/2;
        f_c = (log(c)/log(10)) + c;
		if (f_a*f_c<0)
		{
			b = c;
			f_b = (log(b)/log(10)) + b;
		}
		else if (f_b*f_c<0)
		{
			a = c;
			f_a = (log(a)/log(10)) + a;
		}
    }
    
	printf("%.4f\n", c);
	return 0;
}
