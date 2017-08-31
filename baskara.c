#include <stdio.h>
#include <math.h>

void main(){
	float a, b, c, delta, x1, x2;

	printf("Digite um numero para 'a': ");
	scanf("%f", &a);
	fflush(stdin);

	printf("Digite um numero para 'b': ");
	scanf("%f", &b);
	fflush(stdin);

	printf("Digite um numero para 'c': ");
	scanf("%f", &c);
	fflush(stdin);

	delta = pow(b, 2) + 4*a*c;

	if (delta > 0) {
		x1 =  ((b*(-1)) + sqrt(delta))/2*a;
		x2 =  ((b*(-1)) - sqrt(delta))/2*a;
		printf("x1 = %.2f e x2 = %.2f\n", x1, x2);
	} else if (delta < 0) {
		printf("Raiz complexa!\nParte real: %.2f\nParte complexa: raiz de -%f/%f\n", (b*(-1)/(2*a)), delta, (2*a));
	} else {
		x1 = x2 = (b*(-1))/(2*a);
		printf("Raizes iguais: %.2f\n", x1);
	}


}