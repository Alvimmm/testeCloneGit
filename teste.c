#include <stdlib.h>
#include <stdio.h>

int main(){

    int idade;

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    idade--;

    printf("A idade menos 1 é: %d", idade);

    idade += 1;
    
    printf("Sua idade original é: %d", idade); 
    
    printf("\n");

    return 0;
}
