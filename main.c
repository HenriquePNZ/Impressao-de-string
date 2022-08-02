#include <stdio.h>
#include <string.h>

int main() {
  char texto[80],impares[80];
  int tamanho=0,i=0,j=0;
  
  fgets(texto,82,stdin);

  tamanho += strlen(texto)-1;

  for(i=1;i<strlen(texto)-1;i++){
    impares[j]=texto[i];
    j++;
    i++;
  }

  printf("%d\n",tamanho);
  printf("%s\n",impares);
  
  return 0;
}