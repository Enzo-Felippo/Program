#include <stdio.h>

int main()
{ 
    int base;
    int altura;
    int area;

    printf("\n\nDigite o valor da base: ");
    scanf("%i", &base); // Colocar o tipo e a veriavel que vai ser recebido

    printf("Digite o valor da altura: ");
    scanf("%i", &altura);
    
    area = base * altura;

    printf("\nO valor da area eh %i.\n\n", area);

    return 0;
}