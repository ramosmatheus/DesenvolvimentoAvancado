#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
  int idade;
  int *pIdade;
  char nome[30];

  pIdade = &idade;

  printf("Qual é seu nome: ");
  scanf("%s", nome);
  printf("Ola %s.\n", nome);

  printf("Qual a sua idade: "); // Solicita uma idade
  scanf("%d", pIdade ); // Captura oq o usuario digita
  
  if (*pIdade < 17) { // compara para ver se a idade é menor que 17
    printf("Voçê tem menos de 18 anos\n"); // responde se o cliente é de maior ou de menor
  }else{
    printf("Você tem mais de 18 anos\n");
  }

  return 0;
}
