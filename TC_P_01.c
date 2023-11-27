#include <stdio.h>
int main() {
int y, *p, x;
y = 0;
p = &y;
x = *p;
x = 4;
(*p)++;
x--;
(*p) += x;
printf("y = %d\n", y);
return 0;
}
/*

y recebe 0;
ponteiro recebe o enderço de y;
x recebe 4;
o conteudo do endereço soma 1;
x = 3;
o conteudo do endereço recebe 3;
y = 4;

*/