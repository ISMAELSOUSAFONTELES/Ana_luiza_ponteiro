//POR REFERENCIA: USA-SE O ENDEREÇO DA VARIAVEL PARA MUDAR DIRETAMENTE O VALOR DENTRO DA VARIAVEL

void funcaoPorReferencia(int *x) {
    *x = *x * *x;
    printf("Dentro da função: %d\n", *x);
}
void funcaoPorValor(int x) {
    x = x * x;
    printf("Dentro da função: %d\n", x);
}


int main() {
    int num = 5;
    int num1 =5;
    funcaoPorReferencia(&num);
    funcaoPorValor(num1);
    printf("Fora da função: %d\n", num);
    printf("Fora da função: %d\n", num1);

    return 0;
}