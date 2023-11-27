#include <stdio.h>
#include <stdlib.h>


int main()
{   
    int i, j;
    //alocação estatica
    int a[3][3];
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", &a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    //alocação dinamica
    int **p;
    p = (int**)malloc(3*sizeof(int*));
        for(i = 0; i < 3; i++)
        {
            p[i] = (int*)malloc(3*sizeof(int));
        }
        for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", &p[i][j]);
        }
        printf("\n");
    }
    return 0;
}