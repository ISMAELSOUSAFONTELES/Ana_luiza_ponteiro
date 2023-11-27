#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int *p;

    p = ( int *)malloc(5*sizeof(int));

    for(i = 0; i < 4; i++)
    {
        scanf("%d\n", &p[i]);
    }
    printf("\n\n");
    for(i = 0; i < 4; i++)
    {
        if(p[i] % 2 ==0)
        {
        printf("%d\n", &p[i]);
        }
    }
    free(p);
    return 0;
}