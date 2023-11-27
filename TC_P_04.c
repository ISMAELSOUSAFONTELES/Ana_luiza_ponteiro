#include <stdio.h>
#include <stdlib.h>


int soma(int *x, int *y, int *z)
{
    *z = *x + *y;
}


int main()
{
    int A;
    int B;
    int C;

    scanf("%d %d", &A, &B);

    soma(&A, &B, &C);

    printf("%d", C);


    return 0;
}
