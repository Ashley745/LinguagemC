#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

int main(){
    tela();
    system("mkdir documento");
    system("cd documento");
    system("touch elementos.txt");
    printf("Os comandos foram executados....\n");
    

return 0;

}