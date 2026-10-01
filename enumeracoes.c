// crie um enum para os meses do ano e escreva um programa que leia um numero de 1 a 12 e informe o mes correspondente
#include <stdio.h>

enum Mes {
    JANEIRO = 1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
};

int main() {
    int numero_mes;
    
    printf("Digite um numero de 1 a 12 para informar o mes correspondente: ");
    scanf("%d", &numero_mes);

    switch (numero_mes) {
        case JANEIRO:
            printf("O mes correspondente e Janeiro.\n");
            break;
        case FEVEREIRO:
            printf("O mes correspondente e Fevereiro.\n");
            break;
        case MARCO:
            printf("O mes correspondente e Marco.\n");
            break;
        case ABRIL:
            printf("O mes correspondente e Abril.\n");
            break;
        case MAIO:
            printf("O mes correspondente e Maio.\n");
            break;
        case JUNHO:
            printf("O mes correspondente e Junho.\n");
            break;
        case JULHO:
            printf("O mes correspondente e Julho.\n");
            break;
        case AGOSTO:
            printf("O mes correspondente e Agosto.\n");
            break;
        case SETEMBRO:
            printf("O mes correspondente e Setembro.\n");
            break;
        case OUTUBRO:
            printf("O mes correspondente e Outubro.\n");
            break;
        case NOVEMBRO:
            printf("O mes correspondente e Novembro.\n");
            break;
        case DEZEMBRO:
            printf("O mes correspondente e Dezembro.\n");
            break;
        default:
            printf("Numero invalido. Digite um numero de 1 a 12.\n");
    }

    return 0;
}