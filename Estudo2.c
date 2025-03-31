#include <stdio.h>

int main(){

    int idade = 0;
    float  peso = 0.0;

    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    printf("Digite o seu peso:");
    scanf("%f", &peso); 

    printf("Idade informada: %d.\n", idade);
    printf("peso informado: %f.\n", peso);

}