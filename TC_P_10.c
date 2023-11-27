#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n, i, j,temp;
    int *p;

     scanf("%d", &n);

    p = (int *)malloc(n*sizeof(int));

   
    for(i = 0; i < n;i++)
    {
        scanf("%d", &p[i]);
        for(j = 0; j < i; j++)
        {
            if(p[i] > p[j])
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        printf("%d", p[i]);
    }

    return 0;
}