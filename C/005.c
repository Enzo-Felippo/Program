#include <stdio.h>

int main()
{ 
    int minhaIdade;
    minhaIdade = 23;
    
    int maeIdade = 48;
    int paiIdade = 58;
    int irmaIdade = 18;
    
    int idadeTotal;
    idadeTotal = minhaIdade * maeIdade / paiIdade - irmaIdade;
    
    printf("%i\n", idadeTotal);
    
    return 0;
}