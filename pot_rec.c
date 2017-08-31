#include <stdio.h>


void main(){
    int potencia(int x, int n);
    printf("%i", potencia(3, 5));
}

int potencia(int x, int n){
    int resp;
    if (n > 0){
        return x*potencia(x, n-1);
    } 
    return 1;
}

