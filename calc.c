#include <stdio.h>

int main()
{
float n1,n2,res;
int op;
op=res=n2=n1=0;
while(op!=5){
    printf("irforme os valores \n");
    printf("irforme n1:");
    scanf("%f",&n1);
    printf("irforme n2:");
    scanf("%f",&n2);
    printf("MENU \n");
    printf("soma \n");
    printf("subtrai \n");
    printf("divide \n");
    printf("multiplica \n");
    printf("sair \n");
    printf("opção:");
    scanf("%i",&op);
    switch(op){
        case 1:
        res=n1+n2;
        printf("resultado: %.1f \n\n",res);
        break;
        case 2:
        res=n1-n2;
        printf("resultado: %.1f \n\n",res);
        break;
        case 3:
        res=n1/n2;
        printf("resultado: %.1f \n\n",res);
        break;
        case 4:
        res=n1*n2;
        printf("resultado: %.1f \n\n",res);
        break;
        case 5:
        printf("sumiu \n\n");
        break;

        default:
        printf("opção ivalida! \n\n");
    }

}
return 0; }
