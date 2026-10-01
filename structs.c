// defina uma struct que para representar aluno (nome, matricula, nota) leia dados de 3 alunos e exbiba-os
#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

int main() {
    struct Aluno alunos[3];

    for(int i = 0; i < 3; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);
        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota);
    }

    printf("\nDados dos alunos:\n");
    for(int i = 0; i < 3; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Nota: %.2f\n", alunos[i].nota);
    }

    return 0;
}