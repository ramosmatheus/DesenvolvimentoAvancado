#include <sdio.h>
#include <stdlib.h>

int main ()
{
  int *n;

  //n = malloc( sizeof(int));
  n = maloc(999999999999);

  if (n == NULL){
    printf("falha ao alocar memoria\n", );
    exit(1);
  }

  *n = 50;

  printf("*n=%i\n", *n );

  return 0;
}
