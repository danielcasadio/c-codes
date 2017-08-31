#include <stdio.h>

void main(){
    int mdc(int x, int y);
    printf("%i", mdc(20, 50));
}

int mdc(int x, int y){
    if (y <= x && (x % y == 0)){
        return y;
    } else if (x < y){
        return mdc(y,x);
    } else {
        return mdc(y, x%y);
    }
}