#include <stdio.h>


int main(){
    int i;

    printf("Digite um inteiro de 5 dígitos para saber se é palíndromo ou não: ");
    scanf("%d", & i);
    
    int pri =  i / 10000;
    int seg = (i / 1000) % 10;
    int ter = (i / 100) % 10;
    int qua = (i / 10) % 10;
    int qui = i % 10;

    if(pri == qui || seg == qua){
        printf("O número %d é palíndromo.\n", i);
    } else{
        printf("O número %d NÃO é palíndromo.", i);
    }

    return 0;
}