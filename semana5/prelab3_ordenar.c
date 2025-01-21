#include<stdio.h>

int main() {
	float a,b,c;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
    
	if ((a<b)) {
		if ((b<c)) {
			printf("%.2f; %.2f; %.2f\n", a, b, c);
		} else {
			if ((c<a)) {
				printf("%.2f; %.2f; %.2f\n", c, a, b);
			} else {
				printf("%.2f; %.2f; %.2f\n", a, c, b);
			}
		}
	} else {
		if ((a<c)) {
			printf("%.2f; %.2f; %.2f\n", b, a, c);
		} else {
			if ((c<b)) {
				printf("%.2f; %.2f; %.2f\n", c, b, a);
			} else {
				printf("%.2f; %.2f; %.2f\n", b, c, a);
			}
		}
	}
	return 0;
}