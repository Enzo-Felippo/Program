#include <stdio.h>

int main()
{ 
    int dado = 0;

    for (int i = 10; i > 0; i--)
    {
        printf("\n%i", i);
    }

    while (dado < 10)
    {
        printf("\nDigite um numero: ");
        scanf("%i", &dado);
    }
    
    
    return 0;
}