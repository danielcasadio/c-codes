#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void main(){
    int cod, qtd, i, j;
    char palavra[];
    palavra = malloc(50);

    printf("Digite a quantidade de casos de teste: ");
    scanf("%i", &qtd);
    fflush(stdin);

    for(i = 0; i < qtd; i++){
        printf("Digite a palavra que quer codificar: ");
        scanf("%s", &palavra);
        fflush(stdin);
        palavra = palavra.upper
        printf("Digite um valor para ser o codificador: ");
        scanf("%i", &cod);
        fflush(stdin);

        for(int i = 0; i < sizeof(palavra); i++;){
            putchar(toupper(palavra[i]));
            
        }
    }

}