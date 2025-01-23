#include<stdio.h>

int main() {
	int i;
	int j;
	int n;
	int num;
	int suma;
	n = 0;
	while (n<1) {
		scanf("%i", &n);
	}
	num = 1;
	for (i=1; i<=n; ++i) {
		suma = 0;
		for (j=1; j<=i; ++j) {
			suma = suma+num;
			num = num+2;
		}
		printf("%i\n", suma);
	}
	return 0;
}
