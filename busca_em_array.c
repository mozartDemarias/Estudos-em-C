// implemente um programa que leia um array de 8 elementos e verifique se um numero informado pelo usuario esta presente (busca simples)
#include <stdio.h>

int main(){
    int array[8];
    int numero;
    int presente = 0;

    printf("Digite 8 numeros inteiros: ");
    for(int i = 0; i < 8; i++){
        scanf("%d", &array[i]);
    }

    printf("Digite o numero a ser buscado: ");
    scanf("%d", &numero);

    for(int i = 0; i < 8; i++){
        if(array[i] == numero){
            presente = 1;
            break;
        }
    }

    if(presente){
        printf("O numero %d esta presente no array.\n", numero);
    } else {
        printf("O numero %d nao esta presente no array.\n", numero);
    }

    return 0;
}