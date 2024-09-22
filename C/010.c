#include <stdio.h>

int main()
{ 
    int num;
    int fatorial = 1;
    printf("\n\nEscollha um numero para o fatorial: ");
    scanf("%i", &num);
    for (; num > 0; num--){
        fatorial *= num;
    }

    printf("\n\nO valor do fatorial eh %i", fatorial);
    return 0;
}