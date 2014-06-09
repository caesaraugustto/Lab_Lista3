#include <stdio.h>
#include <string.h>
char inverte(char string[]){
    int contador, tamanho = 0;
    tamanho = strlen(string);
    for(contador=0;contador <= tamanho;contador++)
      if(string[contador] == '0')
      	string[contador] = '1';     
      printf("%s\n",string);    
  }
  void print (char string1[]){
  	printf("Digite um valor para verificar\n");
  	scanf("%s",&string1);
  	inverte(string1);
  }
  int main(){
  	char valor[5];  	
  	print(valor);
  	return(0);
  }
