#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
  int idade;
  char nome[30];

  printf("Qual é seu nome: ");
  scanf("%s", nome);
  printf("Ola %s.\n", nome);

  printf("Qual a sua idade: "); // Solicita uma idade
  scanf("%i", &idade ); // Captura oq o usuario digita
  if (idade < 17) { // compara para ver se a idade é menor que 17
    printf("Voçê é de menor\n"); // responde se o cliente é de maior ou de menor
  }else{
    printf("Você é de maior\n");
  }

  return 0;
}
