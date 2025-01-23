#include<stdio.h>

int main() {
	int M;
	float n;
	float suma, aux;
	M = 0;
	while (M<=0) {
		scanf("%i", &M);
	}
	n = 0;
	suma = 0;

    while (suma<=M)
    {
        n = n+1;
        suma = suma + (1/n);
    }
    
	printf("%.0f\n", n);
	return 0;
}
