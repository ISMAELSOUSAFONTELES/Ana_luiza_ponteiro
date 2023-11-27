#include <stdio.h>

int maior_end(int *x, int *y)
{
    printf("%d \n %d", x, y);
    if(x > y)
    {
        printf(" a primeira variavel tem o maior endereço");
    }
    else
    {
        printf(" a segunda variavel tem o maior endereço");
    }
}

int main()
{
    int A, B;

    maior_end(&A, &B);
    return 0;
}