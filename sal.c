#include<string.h>
#include <stdio.h>

int main()
{
    char n[30], nm[30];
    float s=0, mont=0, med=0, ms=0;
    int x=0, cont=0;

    do{
        printf("Digite nome: ");
        scanf("%s", n);
        x=strcmp(n,"fim");

        if(x!=0){
            printf("Digite salário: ");
            scanf("%f",&s);

            mont=mont+s;
            cont++;

            if(s>ms){
                strcpy(nm,n);
                ms=s;
            }
        }
    }while(x!=0);
    med=mont/cont;

    //a:
    printf("Media de salarios: %.2f \n",med);

    //b:
    printf("Maior salario: %s -> %.2f",nm,ms);



    return 0;
}
