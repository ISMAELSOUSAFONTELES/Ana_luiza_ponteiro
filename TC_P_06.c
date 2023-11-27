#include<stdio.h>
#include<stdlib.h>




int main()
{   
    int i;
    //alocação estatica
    double n[10];
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", &n[i]);
    }
    printf("\n\n");

    //alocação dinamica
    int *p;
    p = (int *)malloc(10*sizeof(int));
    if (p == NULL)
    {
        printf("sem memoria");
    }
    else
    {
        for(i = 0; i < 5; i++)
        {
            printf("%d\n", &p[i]);
        }
    }

    free(p);
    
    


    return 0;
}