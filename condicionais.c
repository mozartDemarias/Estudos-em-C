//1. Escreva um programa que leia um número inteiro e informe se ele é positivo, negativo ou zero, usando if/else
#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O numero e positivo\n");
    }else if (numero < 0){
        printf("O numero e negativo");
    }
    else{
        printf("O numero e zero");
    }
    return 0;
}