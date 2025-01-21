#include<stdio.h>
#include<math.h>

int main() {
	float a,b,n,x,y,t1,t2,t3;
    
    scanf("%f",&x);
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&n);

    if (n == -1 || n,x,a,b == 0)
    {
        printf("Error matemático");
    } else
    {
       t1 = -exp((1/x)*sqrt((a*a)+(b*b)))/(n*((a*x)+b+3));
       t2 = -log((3*x)+((2*b)/(n+1)))/((2*n)+(1/(x*x)));
       t3 = (3/(4*n*n))*exp(log(a*b*(n-1)*(1/n))*log(x));
       y = t1+t2+t3;
       printf("%.2f\n", y);
    } 
}
