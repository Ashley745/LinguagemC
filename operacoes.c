#include <stdio.h>

int main(){
    int n1,n2,so,su,mt,dv;

    printf("Digite um número e tecle enter\n");
    scanf("%d",&n1);

    printf("Digite outro número e tecle enter\n");
    scanf("%d",&n2);

    so = n1 + n2;
    su = n1 - n2;
    dv = n1 * n2;
    dv = n1 / n2;

    printf("\n-------------------------------------------\n");
    printf("\n------------Veja os resultados-------------\n");
    printf("\n-Soma: %d                                 -\n",so);
    printf("\n-Subtração: %d                            -\n",su);
    printf("\n-Multiplicação: %d                        -\n",mt);
    printf("\n-Divisão: %d                              -\n",dv);
    printf("\n-------------------------------------------\n");

    return 0;

}