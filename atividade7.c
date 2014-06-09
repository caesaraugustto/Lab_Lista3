#include <stdio.h>
int primo (int aa){
	int i,teste;
	teste = 0; 
	printf ("Entre com um numero inteiro\n"); 
  if (scanf ("%d", &aa) != 1)  
    return -1;
    
for (i = 2; i < aa; i++) 
    if (aa % i == 0) 
      teste = 1; 
  if (!teste) 
    printf ("%d e numero primo\n", aa); 
  else 
    printf ("%d nao e um numero primo\n", aa); 	
}

int main (){
	int nb;
primo(nb);    
  return 0; 
} 
