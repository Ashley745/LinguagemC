#include <stdio.h>
#include <stdlib.h> //comando system para limpar a tela

int main(){

    //vamos usar o comando system(/bin/clear) (clear screen) para
    //limpar a tela antes de executar os demais comandos
    system("bin/clear");
    //system("clear");
    int num;
    printf("Digite o ano e tecle enter\n");
    scanf("%d",&num);
    if(num % 4 == 0)
        printf("O ano %d é anobissexto\n",num);
    else
        printf("O ano não é anobissexto\n",num);

return 0;
}