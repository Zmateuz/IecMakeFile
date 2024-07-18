#include<string.h>
#include<stdio.h>
int main(){
    char p[30];
    int soma=0, x=1;

    while(soma<20){
        printf("Informe Palavra [%i]:  ",x);
        gets(p);
        //scanf("%[^\n]", p);
        soma=soma+strlen(p);
        printf("Faltam %i caracteres.\n", 20-soma);
        x++;
    }
    printf("Você digitou %i caracteres!",soma);
    return 0;
}
