#include <stdio.h>

int main(){
    int idade;
    printf("Idade: ");
    scanf("%i", &idade);

    /*
        Mano, tu não precisa colocar chaves no if e else
        Que coisa de louco! primeira vez vendo isso!
        E também quando se coloca um tipo diferente em uma variavel,
        ela não da type erro! Cara... como? Não era para dar erro?

        C é mais aberto do que pensei, muito livre kkkkkkkkkkkkk
    */
    if (idade < 0)
    {
        printf("Idade falsa");
    }else if(idade < 18)
        printf("Voce eh de menor");
    else if(idade < 125){
        printf("Voce eh de maior");
    }else
        printf("Idade muito falsa");
}