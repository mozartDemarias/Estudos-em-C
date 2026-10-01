//Declare uma variavel inteira, um ponteiro para inteiro e mostre o valor da variavel e seu endereco usando & e *
#include <stdio.h>

int main() {
    int variavel = 10;
    int *ponteiro = &variavel;

    printf("Valor da variavel: %d\n", variavel);
    printf("Endereco da variavel: %p\n", (void*)&variavel);
    printf("Valor do ponteiro: %p\n", (void*)ponteiro);
    printf("Valor apontado pelo ponteiro: %d\n", *ponteiro);

    return 0;
}