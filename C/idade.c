#include <stdio.h>

int idade;

int main()
{

  printf("Digite sua idade "); // Solicita uma idade
  scanf("%i", &idade ); // Captura oq o usuario digita
  if (idade < 17) { // compara para ver se a idade é menor que 17
    printf("Voçê é de menor\n"); // responde se o cliente é de maior ou de menor
  }else{
    printf("Você é de maior\n");
  }
}
