#include <stdio.h>
#include <string.h>

int main()
{
   char nome [20], nome2 [20], nome3 [40];

  printf("nome:");
  gets(nome);
  printf("segundo nome:");
  gets(nome2);
  if(strcmp(nome,nome2)==0){
      printf("iguais\n");

  }else{
  printf("diferentes \n");

  }
  strcat(nome2,nome);
  puts(nome2);
  strcpy(nome3,nome2);
  puts(nome3);



    return 0;
}
