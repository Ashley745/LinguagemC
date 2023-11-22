#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int num1, count;

    printf("Digite o número\n");
    scanf("%d",&num1);

        for(count = 1 ; count <= 10 ; count++){
            printf("%d x %d = %d\n",num1,count,num1*count);

        }
    return 0;
} 
