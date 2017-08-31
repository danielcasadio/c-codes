#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fatorial(int n){
	int resp;
	if(n < 0) {
		n *= -1;
		resp = n;
		for (int i = n -1; i > 0; i--){
		resp = resp*i;
		}
		resp *= -1;
		return resp;
	} else {
		resp = n;
		for (int i = n -1; i > 0; i--){
			resp = resp*i;
		}
		return resp;
	}
	return 0;

}

int main(){
	int qtd;
	printf("Calculo de fatoriais\n");
	printf("Digite por favor a quantidade de numeros: ");
	scanf("%i", &qtd);
	fflush(stdin);

	for(int j = 0; j < qtd; j++){
		int k, res;
		printf("Digite um numero para ser calculado:");
		scanf("%i", &k);
		fflush(stdin);
		res = fatorial(k);
		printf("O fatorial de %i eh %i.\n", k, res);
	}

	printf("Programa finalizado\n");
}

