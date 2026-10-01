// Leia 10 numeros inteiros em um array e calcule a soma e a media dos elementos
#include <stdio.h>

int main(){
    int numeros[10];
    int soma = 0;
    float media;

    printf("Digite 10 numeros inteiros: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    media = (float)soma / 10;

    printf("A soma dos elementos e: %d\n", soma);
    printf("A media dos elementos e: %.2f\n", media);

    return 0;
}