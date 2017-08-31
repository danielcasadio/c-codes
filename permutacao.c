#include <stdio.h>
#include <stdlib.h>

int times(long int n, int d){
	int r = 0;
	long int aux = 0;
	while (n > 0){
		aux = n%10;
		if (aux == d){
			r++;
		}
		n = n/10;
	}
	return r;
}

int main(){
	long int a;
	int b;
	printf("Digite um valor para A: ");
	scanf("%li", &a);
	fflush(stdin);

	printf("Digite um valor para B: ");
	scanf("%d", &b);
	fflush(stdin);

	printf("O digito %d aparece %d vezes no numero %li\n", b, times(a,b), a);

	//printf("%d\n", 123/10);
}