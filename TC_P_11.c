#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 void maiusculo(char *x)
 {
    int i = 0;
    while(x[i] != '\0')
    {
        x[i] = toupper(x[i]);
        i++;
    }
 }

int main()
{
    char p[] = "pamonha";

    maiusculo(&p);

    printf("%s", p);


    return 0;
}