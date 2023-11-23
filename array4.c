#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int num[7] = {12,50,21,4,8,13,28};
    int i=0, soma=0;
    while(i < 7){
        soma += num[i];
        i++;
    }
    printf("O resultado é %d\n",soma);
    return 0;

}