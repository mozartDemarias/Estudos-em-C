// desenvolva uma funcao que recebe três notas e retorne a media. No programa principal, utilize essa funcao para calcular a média de varios alunos
#include <stdio.h>

void calcular_media(float nota1, float nota2, float nota3, float *media){
    *media = (nota1 + nota2 + nota3) / 3;
}

int main(){
    int quantidade_alunos;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidade_alunos);

    for(int i = 0; i < quantidade_alunos; i++){
        float nota1, nota2, nota3, media;
        printf("Digite as tres notas do aluno %d: ", i + 1);
        scanf("%f %f %f", &nota1, &nota2, &nota3);
        calcular_media(nota1, nota2, nota3, &media);
        printf("A media do aluno %d e: %.2f\n", i + 1, media);
    }
    return 0;
}