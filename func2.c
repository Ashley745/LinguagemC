#include <stdio.h>
#include <stdlib.h>

int soma(int valores[], int tamanho);
int main(){
    int num[5] = {20,33,40,12,55};
    printf("O resultado da soma é %d\n",soma(num,5));

    return 0;
}

int soma(int valore[], int tamanho){
    int x;
    int rs = 0;
    for( x = 0; x < tamanho; x++){
        rs += valore [x];
    }
        return rs;
}