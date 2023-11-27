#include <stdio.h>

void inverteNumero(int *numero) {
    int num = *numero;
    int invertido = 0;

    while (num > 0) {
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }

    *numero = invertido;
}

int main() {
    int numero = 231;

    printf("Número original: %d\n", numero);

    // Chamando a função com o número por referência
    inverteNumero(&numero);

    // O número foi modificado diretamente pela função
    printf("Número invertido por referência: %d\n", numero);

    return 0;
}