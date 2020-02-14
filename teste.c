#include <stdlib.h>
#include <stdio.h>

int main(){

    int idade, sub;

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    sub = idade - 1;

    printf("A idade menos 1 é: %d", sub);

    printf("\n");

    return 0;
}
