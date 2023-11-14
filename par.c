#include <stdio.h>
#include <stdlib.h> //comando clrscr para limpar a tela

int main(){
    //vamos usar o comando clrscr (clear screen) para
    //limpar a tela antes de executar os demais comandos
    int num;
    printf("Digite um número e lhe diremos se é par ou impar\n");
    scanf("%d",&num);
    if(num % 2 == 0)
        printf("O número %d é par\n",num);
    else 
        printf("O número %d é impar\n",num);

return 0;
}